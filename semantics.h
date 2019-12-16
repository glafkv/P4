#ifndef SEMANTICS_H
#define SEMANTICS_H
#include <fstream>
#include "token.h"
#include "node.h"

using namespace std;

struct stack_t{
	Token token;
	int lineNumber;
	int scope;
};

extern vector<stack_t> stack;
extern ofstream targetFile;

int checkVarExist(stack_t);
int find(stack_t);
int findStack(stack_t);
int compareScope(stack_t);
void checkVar(stack_t);
void removeLocalVar(int);
void printStack();
void semantics(node_t*);

#endif
