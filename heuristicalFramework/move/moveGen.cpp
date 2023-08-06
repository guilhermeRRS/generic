#include <vector>

#include "change.cpp"

#include "../problem/data.cpp"
#include "../problem/solution.cpp"

using namespace std;

template <typename Tsol, typename Tchange>

class MoveGen
{

public:
    Solution<Tsol> *sol;
    Data *data;
    vector<Change<Tchange>> changes;
    bool successGenerating;

    MoveGen() { NotImplemented(); }

    virtual bool generate() { NotImplemented(); };

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
};