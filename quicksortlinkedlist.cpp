 #include <vector>
#include <algorithm>

/* a node of the singly linked list 
struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; */
//you have to complete this function
void quickSort(struct node **headRef) 
{
    node* temp=*headRef;
       vector<int>v;
       while(temp!=NULL)
       {
           v.push_back(temp->data);
           temp=temp->next;
       }
       sort(v.begin(),v.end());
       temp=*headRef;
       for(int i=0;i<v.size();i++)
       {
           temp->data=v[i];
           temp=temp->next;
       }
    
}