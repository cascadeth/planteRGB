// Include Guard
#ifndef __ZONE_H_INCLUDED__
#define __ZONE_H_INCLUDED__
//=================================


#include <vector>
#include <string>

#include "./json.hpp"

#include "./Schedule.hpp"
#include "./LED.hpp"

using nlohmann::json;

class Zone
{
private:
    Schedule* schedule;
    std::vector<LED*> leds;

public:
    // USE ACCESSORS AND MUTATORS
    std::shared_ptr<unsigned int> schedule_id;
    unsigned int id;
    std::string name;

    // Constructor
    Zone();
    Zone(const Zone& z);

    // Copy
    void copy(const Zone& z);

    // Accessors
    unsigned int get_id() const;
    std::string get_name() const;
    Schedule* get_schedule() const;

    // Mutators
    void set_id(unsigned int);
    void set_name(std::string value);
    void set_schedule(Schedule*);

    // CRUD
    void add_led(LED* led);
    std::vector<LED*> get_leds() const;
    bool has_led(LED* led) const;
    void delete_led(LED* led);
};

// JSON
void to_json(json& j, const Zone& p);
void from_json(const json& j, Zone& p);


#endif //__ZONE_H_INCLUDED__
