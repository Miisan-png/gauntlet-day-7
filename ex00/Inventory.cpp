#include "Inventory.hpp"

void Inventory::add(const std::string& item){
    m_items.push_back(item);
}

void Inventory::remove(const std::string& item){
    (void)item;
    m_items.pop_back();
}

bool Inventory::has(const std::string& item) const{
    for (const auto& it : m_items) {
        if (it == item)
            return true;
    }

    return false;
}

int Inventory::count() const{
    return static_cast<int>(m_items.size());
}
