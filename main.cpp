#include "Node.h"

#include <iostream>

int main() {
	Node root;

	root.AddLeft();
	root.AddRight();

	root.right->AddLeft();
	root.right->AddRight();

	root.Invert();

	return 0;
}
