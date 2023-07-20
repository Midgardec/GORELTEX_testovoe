//
// Created by valie on 20.07.2023.
//

#include "Solution.h"


/// reverse recursive
ListNode *Solution::reverseList1(ListNode *head) {
    if (!head || !(head->next))
        return head;

    ListNode *new_head = reverseList1(head->next);
    head->next->next = head;
    head->next = nullptr;
    return new_head;
}

/// reverse iterative
ListNode *Solution::reverseList2(ListNode *head) {
    ListNode *prev_node = nullptr;
    ListNode *current_node = head;

    while (current_node) {
        ListNode *next_node = current_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }

    return prev_node;
}