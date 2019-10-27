struct node { int i; struct node *next; };
void print_list(struct node * current);
struct node * insert_front(struct node * current, int x);
struct node * free_list(struct node * begin);
