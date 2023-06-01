#pragma once

#include "laiobjectorch.h"

class OcmOrch: public LaiObjectOrch
{
public:
    OcmOrch(DBConnector *db, const vector<string> &table_names);

    void setFlexCounter(lai_object_id_t id, vector<lai_attribute_t> &attrs);

    void doTask(swss::NotificationConsumer &consumer);

    void setSelfProcessAttrs(const string &key,
                             vector<FieldValueTuple> &auxiliary_fv,
                             string operation_id="");
};

