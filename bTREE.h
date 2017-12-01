#pragma once

#include <string>

#include <math.h>

#include <queue>

using namespace std;

#ifndef BTREE_H

#define BTREE_H

class bTREE

{

    struct treeNode{

        string data;

        int time;

        bool isleaf;

        string h;

        short entry;

        treeNode * leftpntr;

        treeNode * rightpntr;

    };

    queue<treeNode*> queueHelper;



private:

    //some data structure to hold your treeNodes together ...

    //DATASTUCTURE treeNodes tree;

    //any helper private variables you need
    int nodeCount;

    void destroy(treeNode * & subtree);

    treeNode * tree;

    treeNode* left;

    treeNode* right;

    void displayLeft(ostream & outfile, treeNode  * subtree, string) const;

    void displayRight(ostream & outfile, treeNode * subtree, string) const;





public:

    bTREE();

    ~bTREE();



    int dataInserted();

    int numberOfNodes();

    treeNode * getTree();

    bool insert(string, int);



    bool find(string string1);

    void print(std::ostream& ) const;

    string locate(string);

    static void postOrder(std::vector<short> & traversal, const treeNode *subtree);





    friend bool operator==(const bTREE& lhs, const bTREE& rhs);

    friend bool operator!=(const bTREE& lhs, const bTREE& rhs);



    friend std::ostream& operator<<(std::ostream& out, const bTREE& p);



};


