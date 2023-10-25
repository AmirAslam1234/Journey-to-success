#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode*next;
    ListNode(){
        val = 0;
        next = nullptr;
    }
    ListNode(int val){
        this->val = val;
        next = nullptr;
    }
    ListNode(int val, ListNode * head){
        this->val = val;
        this->next = head;
    }
};
class Solution{
    public:
    ListNode* deleteDuplicates(ListNode* head){
        cout<<"start"<<endl;
        if(head==nullptr){
            return head;
        }
        ListNode*current = head;
        while(current->next!=nullptr){
            if(current->val==current->next->val){
                ListNode*temp = current->next;
                current->next = temp->next;
                delete temp;
            }
            current=current->next;
        }
        return head;

    }
    ListNode*createNodes(int arr[],int n){
        if(n==0){
            return nullptr;
        }
        ListNode*head = new ListNode(arr[0]);
        ListNode*current = head;

        for (int i = 1; i < n; i++)
        {
            cout<<arr[i]<<endl;
            current->next = new ListNode(arr[i]);
            current = current->next;
        }
        return head;
        
    }
    void printElements(ListNode*head){
        if(head==nullptr){
            cout<<"Empty Linked List";
        }
        ListNode*current = head;
        while(current!=nullptr){
            cout<<current->val<<" -> ";
            current=current->next;
        }
        cout<<" nullptr"<<endl;
    }
};
int main(){
    Solution solution;
    // const int n = 10;
    // int arr[n] = {1,2,2,4,7,8,9,9,11,11};
    const int n = 3;
    int arr[n] = {1,1,2};
    ListNode*head = solution.createNodes(arr,n);
    solution.printElements(head);
    ListNode*head2=solution.deleteDuplicates(head);
    solution.printElements(head2);
    return 0;
}