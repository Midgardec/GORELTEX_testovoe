//
// Created by valie on 20.07.2023.
//

#ifndef GORELTEX_TESTOVOE_SOLUTION_H
#define GORELTEX_TESTOVOE_SOLUTION_H


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
/// reverse recursive
    ListNode *reverseList1(ListNode *head);

/// reverse iterative
    ListNode *reverseList2(ListNode *head);
};


#endif //GORELTEX_TESTOVOE_SOLUTION_H
