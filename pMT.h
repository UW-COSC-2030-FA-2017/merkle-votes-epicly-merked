#pragma once



#include "bTREE.h"

#include <string>

using namespace std;

#ifndef PMT_H

#define PMT_H


class pMT : public bTREE

{

private:

    int selectedHash;

    bTREE myMerkle;



    string hash_1(string);

    string hash_2(string);

    string hash_3(string);



public:

    pMT(int);

    ~pMT();





    int insert(string, int);



    int find(string vote, int time, int hashPicker);

    int findHash(string);



    string locateData(string);



    void pMT::rehash(bTREE::treeNode * tree);



    friend bool operator==(const pMT& lhs, const pMT& rhs);



    friend bool operator!=(const pMT& lhs, const pMT& rhs);



    friend pMT operator^(const pMT& lhs, const pMT& rhs);

    friend std::ostream& operator<<(std::ostream& out, const pMT& p);



};


