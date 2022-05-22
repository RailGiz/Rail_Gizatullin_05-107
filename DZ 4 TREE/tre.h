#pragma once
using namespace std;

struct student {
	string name;
	int mark;
};
struct tree {
	student m;
	tree* left = nullptr;
	tree* right = nullptr;
	string letter;
};
inline student create_elem(string name, int mark) {
	student m;
	m.name = name;
	m.mark = mark;
	return m;
}
void add_name(tree*& root, string new_name, int new_mark);
void add_mark(tree*& root, string new_name, int new_mark);
void show_correct(tree* root);
void load_data(const char* filename, tree*& root, int flag);
int _find_in_tree(tree* root, string name, int mark, char letter);
void search_in_tree(const char* filename, tree*& root, char letter);
