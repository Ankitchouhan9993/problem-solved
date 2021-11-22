#include <stdio.h>
#include <stdlib.h>
int maxWeightNode = 0;
int maxWeight = 0;
void insert (struct node *h, int val);
int tree (struct node *p);
struct node
{
  struct node *left, *right;
    left = NULL;
    right = NULL;
  int data;
}
 , head;
&head == NULL;
void
insert (struct node *h, int val)
{
  if (h == NULL)
    {
      h = (struct node *) malloc (sizeof (struct node));
      h->data = val;
    }
  else
    {
      struct node *temp;
      temp = h;
      while (temp != NULL)
	{
	  if (temp->data < val)
	    {
	      temp = temp->right;
	    }
	  else
	    {
	      temp = temp->left;
	    }
	}
      temp->data = val;
    }
}

int
tree (struct node *p)
{
  if (p != NULL)
    {
      int NodeValue = p->data;
      int l = tree (p->left);
      int weight = p->data + l;
      int r = tree (p->right);
      weight += r;
      if (weight > maxWeight)
	{
	  maxWeight = weight;
	  maxWeightNode = Nodevalue;
	}
      return weight;
    }
  else
    {
      return 0;
    }
}

int
main ()
{
  int size;
  for (int i = 0; i < size; i++)
    {
      int temp;
      scanf ("%d", &temp);
      insert (head, temp);
    }
  return 0;
}
