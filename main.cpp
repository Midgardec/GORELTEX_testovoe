#include <iostream>

#include "Solution.h"


/// console print list
void printList(ListNode *head) {
    while (head) {
        std::cout << head->val << "->";
        head = head->next;
    }
    std::cout << "NULL" << std::endl;
}

int main() {
    std::cout << "Hello!" << std::endl;

    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    std::cout << "Straight List 1: \n";
    printList(head);


    Solution Sol;

    ListNode *reversed_head = Sol.reverseList1(head);

    std::cout << "Reversed List \n(Recursive - time O(N) - space O(N)): \n";
    printList(reversed_head);
    std::cout << "\n";


    ListNode *head2 = new ListNode(6);
    head2->next = new ListNode(7);
    head2->next->next = new ListNode(8);
    head2->next->next->next = new ListNode(9);
    head2->next->next->next->next = new ListNode(10);

    std::cout << "Straight List 2: \n";
    printList(head2);

    ListNode *reversed_head2 = Sol.reverseList2(head2);

    std::cout << "Reversed List \n(Iterative - time O(N) - space O(1)): \n";
    printList(reversed_head2);

    return 0;
}
