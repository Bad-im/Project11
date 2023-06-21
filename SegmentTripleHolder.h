#pragma once

#include <string>
#include <nlohmann/json.hpp>

class SegmentTripleHolder {
public:
	int Segment1;
	int Segment2;
	int Segment3;

	void SaveKit();
	void ShowKits();
	void DeleteKit(int id);
	void UpdateKit(int id, const SegmentTripleHolder& updatedKit);
};
