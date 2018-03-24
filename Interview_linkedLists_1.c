// This is linkedList !
#include <stdio.h>

typedef struct product{

		const char *name;
		float price;

		struct product *next;

} product;

// Cycles through the Linked List and prints it

void printLinkedList(product *pProduct){

	// While the value for next isn't NULL
	// which signals the end of the list keep going

	while(pProduct != NULL){

		// Printing values using (*) and ->

		printf("A %s costs %.2f\n",
			(*pProduct).name,
			pProduct->price);

		// Switch to the next item in the Linked List
		pProduct = pProduct->next;
	}
}

void main(){
	// I'm creating the products and setting each
	// next to null

	product banana = {"Banana", 1.50, NULL};
	product apple = {"Apple", 1.25, NULL};
	product pear = {"Pear", 1.75, NULL};
	product milk = {"Milk", 3.50, NULL};
	product chicken = {"Chicken", 2.50, NULL};

	// Now assign a pointer to the value of next
	banana.next = &apple;
	apple.next = &pear;
	pear.next = &milk;
	milk.next = &chicken;

	// What do we do if we want to insert Apples after
	// the lemon?
	product melon = {"Melon", 1.50, NULL};

	// Change the values for next

	pear.next = &melon;
	melon.next = &milk;

	printLinkedList(&banana);
}