#include "Node.h"

#include <iostream>

Node::Node() {
	left = NULL;
	right = NULL;
}

Node::~Node() {
	if (left != NULL) {
		delete left;
	}

	if (right != NULL) {
		delete right;
	}
}

void Node::AddLeft() {
	left = new Node;
}

void Node::AddRight() {
	right = new Node;
}

void Node::Invert() {
	if (left != NULL && right != NULL) {
		Node *temp = left;
		left = right;
		right = temp;
		left->Invert();
		right->Invert();
	} else if (left != NULL) {
		right = left;
		right->Invert();
	} else if (right != NULL) {
		left = right;
		left->Invert();
	}
}
