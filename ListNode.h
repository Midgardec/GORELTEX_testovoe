//
// Created by valie on 20.07.2023.
//

#ifndef GORELTEX_TESTOVOE_LISTNODE_H
#define GORELTEX_TESTOVOE_LISTNODE_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

#endif //GORELTEX_TESTOVOE_LISTNODE_H
