#include <iostream>

using namespace std;

class OrangeTree{
public:
	OrangeTree();
	OrangeTree(int newLeafCount, double newFruitCount);
	void display();
	void dropFruit();
	int leafCount;
	double fruitCount;
};

OrangeTree::OrangeTree(){
	leafCount = 0;
	fruitCount = 0;
}

OrangeTree::OrangeTree(int newLeafCount, double newFruitCount){
	leafCount = newLeafCount;
	fruitCount = newFruitCount;
}

void OrangeTree::display(){
	cout << "There are " << leafCount << " leafs and " << fruitCount << " fruits." << endl;
}

void OrangeTree::dropFruit(){
	fruitCount--;
	cout << "One fruit has been dropped. New fruit count is: " << fruitCount << endl;
}
