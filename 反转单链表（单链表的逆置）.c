struct ListNode* reverseList(struct ListNode* head){
    if(head==NULL)
    return NULL;
struct ListNode* n1=NULL,*n2=head,*n3=head->next;
while(n2)
{
    n2->next=n1;
    n1=n2;
    n2=n3;
    if(n3)
    n3=n3->next;
}
return n1;
}