#include "SegmentTripleHolder.h"
#include <fstream>
#include <iostream>
#include <iomanip>
void SegmentTripleHolder::SaveKit() {
    std::ifstream file("bd.json");
    nlohmann::json root;
    if (file.is_open()) {
        file >> root;
        file.close();
    }

    nlohmann::json kitData;
    kitData["������� 1"] = Segment1;
    kitData["������� 2"] = Segment2;
    kitData["������� 3"] = Segment3;
    root.push_back(kitData);

    std::ofstream fileOutput("bd.json");
    fileOutput << std::setw(3) << root << std::endl;
    fileOutput.close();
}

void SegmentTripleHolder::ShowKits() {
    std::ifstream file("bd.json");
    nlohmann::json root;
    if (file.is_open()) {
        file >> root;
        file.close();
    }

    std::cout << std::left << std::setw(10) << "������� 1"
        << std::setw(15) << "������� 2"
        << std::setw(15) << "������� 3" << std::endl;


    for (const auto& carData : root) {
        std::cout << std::left << std::setw(10) << carData["������� 1"].get<int>()
            << std::setw(15) << carData["������� 2"].get<int>()
            << std::setw(15) << carData["������� 3"].get<int>() << std::endl;
    }
}

void SegmentTripleHolder::DeleteKit(int id) {
    std::ifstream file("bd.json");
    nlohmann::json root;
    if (file.is_open()) {
        file >> root;
        file.close();
    }

    nlohmann::json updatedRoot = nlohmann::json::array();
    for (const auto& carData : root) {
        if (carData["Id"].get<int>() != id) {
            updatedRoot.push_back(carData);
        }
    }

    std::ofstream fileOutput("bd.json");
    fileOutput << std::setw(4) << updatedRoot << std::endl;
    fileOutput.close();
}

void SegmentTripleHolder::UpdateKit(int id, const SegmentTripleHolder& updatedCar) {
    std::ifstream file("bd.json");
    nlohmann::json root;
    if (file.is_open()) {
        file >> root;
        file.close();
    }

    for (auto& carData : root) {
        if (carData["Id"].get<int>() == id) {
            carData["������� 1"] = updatedCar.Segment1;
            carData["������� 2"] = updatedCar.Segment2;
            carData["������� 3"] = updatedCar.Segment3;
            break;
        }
    }
    std::ofstream fileOutput("bd.json");
    fileOutput << std::setw(4) << root << std::endl;
    fileOutput.close();
}