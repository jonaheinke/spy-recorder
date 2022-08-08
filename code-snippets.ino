#include "math.h"

float ratio_to_dB(float ratio) {
	return 20 * log10(ratio);
}

float dB_to_ratio(float dB) {
	return pow(10, dB / 20);
}