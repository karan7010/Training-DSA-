/*328. Odd Even Linked List

Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.*/

class Solution {
public:
    ListNode* oddEvenList(ListNode* front) {
        if(front==nullptr|| front->next==nullptr){
            return front;
        }
        ListNode* odd= front;
        ListNode* even=front->next;
        ListNode* temp= even;
        while(even!=nullptr && even->next!=nullptr){
            odd->next = odd->next->next;
            even->next =even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=temp;
        return front;
    }
};
