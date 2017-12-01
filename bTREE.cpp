#include "bTREE.h"

#include <queue>

using namespace std;



//look at descriptions in pMT.h for guidance on what you might need for these function to actually do

bTREE::bTREE()

{
    tree == NULL;

    int h = 0;

    nodeCounter = 0;

}



bTREE::~bTREE()

{
    delete(tree);

}



int bTREE::dataInserted()

{
    return dataInserted();

}



int bTREE::numberOfNodes()

{
    int num = 0;

    return num;
}

void bTREE::postOrder(std::vector<short> & traversal, const treeNode * subtree)
{
    if(subtree != NULL)
    {
        postOrder(traversal, subtree->left);

        postOrder(traversal, subtree->right);

        traversal.push_back(subtree->entry);
    }
}

int bTREE::insert(string data, int time)

{
    treeNode * n = new treeNode;

    n->data = data;

    n->time = time;

    n->left = NULL;

    n->right = NULL;

    if(tree == NULL)
    {
        nodeCounter++;
        tree = n;
    }

    treeNode * temp = queueHelper.front();

    if(!temp->left)
    {
        temp->left = n;

        queueHelper.push(n);
    }
    else
    {
        temp->right = n;

        queueHelper.push(n);

        queueHelper.pop();
    }

    return nodeCounter;

}



int bTREE::find(string string1)

{
    return find(string1);
}



string bTREE::locate(string a, string)

{
    string none = " ";
    return locate(a, none);
}



bool operator ==(const bTREE& lhs, const bTREE& rhs)

{
    if (lhs.tree == NULL && rhs.tree == NULL) return true;

    if(lhs.tree == NULL || rhs.tree == NULL) return false;

    if(lhs.tree->data.compare(rhs.tree->data) == 0 && lhs.tree->time == rhs.tree->time)
    {
        return true;
    }
    else
    {
        return false;
    }

}



bool operator !=(const bTREE& lhs, const bTREE& rhs)
{
    if(lhs.tree == NULL && rhs.tree == NULL) return false;

    if(lhs.tree == NULL || rhs.root == NULL) return true;

    if(lhs.tree->data.compare(rhs.root->data) == 0 && lhs.tree->time == rhs.tree->time)
    {
        return false;
    }
    else
    {
        return true;
    }

}



ostream & operator <<(std::ostream& out, const bTREE& p)
{
    p.print(out);
    return out;
}

void bTREE::print(ostream & outfile) const
{
    if (tree == NULL)
    {
        outfile << "-" << endl;
    }
    else
    {
        displayLeft(outfile, tree->leftpntr, "   ");

        oufile << "---" << tree->data << endl;

        displayRight(outfile, tree->rightpntr, "   ");
    }

}
void bTREE::displayLeft(ostream & outfile, treeNode * subtree, std::string pre) const)
{
    if(subtree == NULL)
    {

        outfile << pre + "                    /" << endl;
    }
    else
    {
        displayLeft(outfile, subtree->leftpntr, pre + "                ");

        outfile << pre + "           /---" << subtree->data << endl;

        displayRight(outfile, subtree->rightpntr, pre + "          |   ");
    }

}

void bTREE::displayRight(ostream & outfile, treeNode * subtree, std::string pre) const)
{
    if(subtree == NULL)
    {

        outfile << pre + "                    \\" << endl;
    }
    else
    {
        displayLeft(outfile, subtree->leftpntr, pre + "                ");

        outfile << pre + "           \\---" << subtree->data << endl;

        displayRight(outfile, subtree->rightpntr, pre + "             ");
    }

}
void bTREE::destroy(treeNode * & subtree)
{
    if(subtree != NULL)
    {
        destroy(subtree->leftpntr);
        destroy(subtree->rightpntr);
        delete subtree;
        subtree = NULL;
    }
}
bTREE::treeNode* bTREE::getTree()

{

    return tree;

}
