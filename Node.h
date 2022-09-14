#ifndef NODE_H
#define NODE_H

class Node {
	public:
		Node();
		~Node();
		void AddLeft();
		void AddRight();
		
		void Invert();

		void Print();
	
		Node *left;
		Node *right;
};

#endif
