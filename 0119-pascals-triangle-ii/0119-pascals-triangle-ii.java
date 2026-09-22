import java.util.*;
class Solution {
    public List<Integer> getRow(int rowIndex) {
        long e=1;
        ArrayList<Integer> n=new ArrayList<>();
        n.add((int) e);

        for(int i=0;i<rowIndex; i++){
            e=e*(rowIndex-i);
            e=e/(i+1);
            n.add((int)e);
        }
        return n;
    }
}