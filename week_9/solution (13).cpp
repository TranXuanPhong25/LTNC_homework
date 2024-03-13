#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class Solution
{
public:
    Node *insert(Node *head, int data)
    {
        // Complete this function
        Node *tmp = head;
        Node *n = (Node *)malloc(sizeof(Node));
        n->data = data;
        n->next = NULL;

        if (NULL == head)
        {
            head = n;
        }
        else
        {
            if (tmp->next == NULL)
            {
                head->next = n;
            }
            else
            {
                while (tmp->next != NULL)
                {
                    tmp = tmp->next;
                    if (tmp->next == NULL)
                    {
                        tmp->next = n;
                        break;
                    }
                }
            }
        }

        return head;
    }
    void display(Node *head)
    {
        Node *start = head;
        while (start)
        {
            cout << start->data << " ";
            start = start->next;
        }
    }
};
int main()
{
    Node *head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
}