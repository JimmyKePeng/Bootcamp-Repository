#include "LinkListInt.h"

LinkListInt::LinkListInt()
{
    size = 0;
    head = nullptr;

}

LinkListInt::~LinkListInt()
{
}

void LinkListInt::Add(int value)
{
    Node * node = new Node;
    node->value = value;
    node->next = nullptr;
    size++;

    if (head == nullptr)
    {
        head = node;
        head->next = nullptr;
        return;
    }
    Node* prevN = nullptr;
    Node* currN = head;
    while (currN != nullptr)
    {
        if (value < currN->value)
        {
            node->next = currN;
            if (prevN != nullptr)
                prevN->next = node;
            else
                head = node;
            return;
        }
        prevN = currN;
        currN = currN->next;
    }
    prevN->next = node;
}

void LinkListInt::Remove(int value)
{
    Node* prevN = nullptr;
    Node* currN = head;
    while (currN != nullptr)
    {
        if (currN->value == value)
        {
            if (prevN != nullptr)
            {
                prevN->next = currN->next;
            }else
            {
                head = currN->next;
            }
            delete currN;
            size--;
            return;
        }
        prevN = currN;
        currN = currN->next;
    }
}

bool LinkListInt::Contains(int value)
{
    Node * curr = head;
    while (curr != nullptr)
    {
        if (curr->value == value)
                return true;
        curr = curr->next;
    }
    return false;
}

int LinkListInt::Size()
{
    return size;
};

string LinkListInt::ToString()
{
    string str = "head->";
    Node * curr = head;
    while (curr != nullptr)
    {
        str += to_string(curr->value) + "->";
        curr = curr->next;
    }
    str += "nullptr";
    return str;
};
