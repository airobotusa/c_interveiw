// This is linkedList 2 add brand item!
#include <stdio.h>

typedef struct product{

		const char *name;
		const char *brand;
		float price;

		struct product *next;

} product;

// Cycles through the Linked List and prints it

void printLinkedList(product *pProduct){

	// While the value for next isn't NULL
	// which signals the end of the list keep going

	while(pProduct != NULL){

		// Printing values using (*) and ->

		printf("A %s of brand: %s and costs %.2f\n",
			(*pProduct).name,
			pProduct->brand,
			pProduct->price);

		// Switch to the next item in the Linked List
		pProduct = pProduct->next;  //without this assignment, go infinite loop.
	}
}

void main(){
    printf("This is linkedList 2 add brand item!\n");
	// I'm creating the products and setting each
	// next to null

	product banana = {"Banana", "Brand1", 1.50, NULL};
	product apple = {"Apple", "Brand2",1.25, NULL};
	product pear = {"Pear", "Brand1",1.75, NULL};
	product milk = {"Milk", "Brand2",3.50, NULL};
	product chicken = {"Chicken","Brand3", 2.50, NULL};

	// Now assign a pointer to the value of next
	banana.next = &apple;
	apple.next = &pear;
	pear.next = &milk;
	milk.next = &chicken;

	// What do we do if we want to insert Melon after the pear?
	product melon = {"Melon", "Brand3", 1.50, NULL};

	// Change the values for next

	pear.next = &melon;
	melon.next = &milk;

    printf("\n*1:After inserting Melon after pear\n");
	printLinkedList(&banana);

	product apple2 = {"Apple2", "Brand2", 1.50, NULL};

    // Insert apple2 after milk

    milk.next = &apple2;
    apple2.next = &chicken;
    printf("\n**2: Now inserting apple2 After milk\n");
    printLinkedList(&banana);

}
