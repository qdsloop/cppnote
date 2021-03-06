
#ifndef set_table_h__
#define set_table_h__

#include "table.h"
#include <set>

class SetTable : public Table {
private:
    std::set<int> m_tbl;

public:
    SetTable();
    virtual ~SetTable();

public:
    virtual void add(int key);
    virtual bool check(int key);
    virtual void dump(char* name);
    virtual void load(char* name);
};

#endif // set_table_h__
