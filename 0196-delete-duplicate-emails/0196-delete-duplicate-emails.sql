# Write your MySQL query statement below
DELETE FROM PERSON
WHERE id NOT IN (
    SELECT min_id FROM (
        SELECT MIN(id) AS min_id
        FROM Person
        GROUP BY email
    ) AS temp_table
)