#pragma once

#include "SegmentTripleHolder.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <vector>

using namespace std;

using namespace System;
using namespace System::Collections::Generic;

namespace Wrapper {

    public ref class SegmentTripleHolderWrapper {
    public:
        SegmentTripleHolder* kit;  // Native C++ class

        SegmentTripleHolderWrapper() : kit(new SegmentTripleHolder()) {}
        ~SegmentTripleHolderWrapper() { this->!SegmentTripleHolderWrapper(); }
        !SegmentTripleHolderWrapper() { delete kit; }

        property int Segment1 {
            int get() { return kit->Segment1; }
            void set(int value) { kit->Segment2 = value; }
        }

        property int Segment2 {
            int get() { return kit->Segment2; }
            void set(int value) { kit->Segment2 = value; }
        }

        property int Segment3 {
            int get() { return kit->Segment3; }
            void set(int value) { kit->Segment3 = value; }
        }

        void SaveKit() { kit->SaveKit(); }
        void ShowKits() { kit->ShowKits(); }
        void DeleteKit(int id) { kit->DeleteKit(id); }
        void UpdateKit(int id, SegmentTripleHolderWrapper^ updatedKit) {
            SegmentTripleHolder newKit;
            newKit.Segment1 = updatedKit->Segment1;
            newKit.Segment2 = updatedKit->Segment2;
            newKit.Segment3 = updatedKit->Segment3;
            kit->UpdateKit(id, newKit);
        }

        // Добавленные методы
        List<SegmentTripleHolderWrapper^>^ GetAllKits() {
            std::ifstream file("bd.json");
            nlohmann::json root;
            if (file.is_open()) {
                file >> root;
                file.close();
            }

            List<SegmentTripleHolderWrapper^>^ kits = gcnew List<SegmentTripleHolderWrapper^>();

            for (const auto& kitData : root) {
                SegmentTripleHolderWrapper^ segmentTripleHolderWrapper = gcnew SegmentTripleHolderWrapper();
                segmentTripleHolderWrapper->Segment1 = kitData["Отрезок 1"].get<int>();
                segmentTripleHolderWrapper->Segment2 = kitData["Отрезок 2"].get<int>();
                segmentTripleHolderWrapper->Segment3 = kitData["Отрезок 3"].get<int>();
                kits->Add(segmentTripleHolderWrapper);
            }
            return kits;
        }
    };
}


