ListNode* middleNode(ListNode* head) {
    if(head==NULL)return head;
    ListNode* p1=head,*p2=head;
    while(p2->next!=NULL && p2->next->next!=NULL)
    {
        p1=p1->next;
        p2=p2->next->next;
    }
    return p2->next==NULL ? p1 : p1->next;
}