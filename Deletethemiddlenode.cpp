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
   
    int getSize(ListNode* head){
        int count=0;
        ListNode* current=head;
       while(current!=nullptr) {
        count++;
        current = current->next;
    }
       return count;
       }

    ListNode* deleteMiddle(ListNode* head) {
         if (head == nullptr || head->next == nullptr)
            return nullptr;
           ListNode* current=head;
           int size=getSize(head);
           int mid=size/2;
           for (int i = 0; i < mid-1; i++) {
               current = current->next;
           }
           ListNode* temp=current->next;
           current->next=current->next->next;
           delete temp;

            return head;
    }
       
};