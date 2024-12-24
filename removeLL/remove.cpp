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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        long long count = 1;
        ListNode* temp = head;
        while(temp->next){
            count++;
            temp = temp->next;
        }
        int num = count - n;
        ListNode* curr = head;
        ListNode* prev = NULL;
        if(num==0){
            return head->next;
        }
        count = 0;
        while(count<num){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next =  NULL;
        return head;
    }
};