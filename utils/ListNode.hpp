 #pragma once
 
 struct ListNode {
     int val;
     ListNode* next = nullptr;
     ListNode* random = nullptr;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };