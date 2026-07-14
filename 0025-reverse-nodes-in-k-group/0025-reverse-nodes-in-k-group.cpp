/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1)
            return head;

        ListNode* s = head;
        ListNode* f = head;
        ListNode* newHead = nullptr;
        ListNode* prevTail = nullptr;

        while (s != nullptr) {
            f = s;

            // Find the kth node
            for (int i = 1; i < k && f != nullptr; i++) {
                f = f->next;
            }

            // Less than k nodes remain
            if (f == nullptr)
                break;

            ListNode* nextNode = f->next;
            f->next = nullptr;

            // Reverse current group
            ListNode* reversedHead = reverse(s);

            if (newHead == nullptr)
                newHead = reversedHead;
            else
                prevTail->next = reversedHead;

            prevTail = s;
            s->next = nextNode;

            s = nextNode;
        }

        return newHead == nullptr ? head : newHead;
    }
};