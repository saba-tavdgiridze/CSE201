#include<iostream>
#include<cstdlib>

#include "LinkedList.hpp"

int main()
{
	int N = 10;

	LinkedList S = LinkedList();

	for(int i=0;i<N;i++){
		int x = rand() % 11;
		std::cout<<x<<"\n";
		S.append(x);
		S.display();
	}
	int threshold = 5;
	LinkedList *T = S.filterSmaller(threshold);

	T->display();

	return 0;
}
