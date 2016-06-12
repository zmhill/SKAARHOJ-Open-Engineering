#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 33	
			

#define SK_MAXACTIONS 2	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 1560 814\" width=\"90%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"1184\" height=\"780\" x=40 y=17 style=\"fill:url(#grad1);\" /><rect width=\"1184\" height=\"10\" x=40 y=85 style=\"fill:rgb(0,0,100);\" /><rect width=\"1184\" height=\"10\" x=40 y=729 style=\"fill:rgb(0,0,100);\" /><rect width=\"90\" height=\"814\" x=0 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /><rect width=\"90\" height=\"814\" x=1174 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16734, GZIP size: 5501 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6B, 0x73, 0x9B, 0xC8, 0xB2, 0xDF, 0xCF, 0xAF, 
	0x60, 0x49, 0xAD, 0x2D, 0xAE, 0x90, 0x0C, 0x08, 0x24, 0x59, 
	0x58, 0xF6, 0xB1, 0x1D, 0x67, 0xED, 0xDA, 0x38, 0x71, 0xAD, 
	0xB2, 0xC9, 0x9E, 0xAB, 0x52, 0xA5, 0x30, 0x8C, 0x2C, 0x12, 
	0x0C, 0xBA, 0x80, 0xFC, 0xB8, 0x8E, 0xFF, 0xFB, 0xED, 0xEE, 
	0x19, 0xD0, 0x80, 0x24, 0x47, 0xC9, 0xEE, 0x4D, 0x2A, 0x1A, 
	0xE6, 0xD5, 0xEF, 0xEE, 0xE9, 0x69, 0xC8, 0x9D, 0x97, 0x2A, 
	0xE7, 0x9F, 0xFC, 0xE1, 0x78, 0x6C, 0xEA, 0x96, 0xE1, 0xE8, 
	0xCE, 0xBE, 0xAD, 0xAB, 0xA6, 0xAA, 0xDB, 0x13, 0x1D, 0x46, 
	0x3A, 0x1D, 0x83, 0x8F, 0x58, 0xC5, 0x88, 0xED, 0x88, 0x35, 
	0x9D, 0x62, 0xC4, 0xE9, 0x8B, 0x35, 0x76, 0x31, 0xD2, 0x2B, 
	0xE0, 0x38, 0xC5, 0x48, 0xBF, 0x80, 0xD3, 0x2D, 0x46, 0x10, 
	0x97, 0x0D, 0xFF, 0xAA, 0xB8, 0x68, 0xA4, 0x82, 0x8B, 0x46, 
	0x2A, 0xB8, 0x68, 0xA4, 0x82, 0x8B, 0x46, 0x2A, 0xB8, 0x68, 
	0xA4, 0xC4, 0x65, 0x1A, 0x8E, 0xC5, 0xD1, 0x9F, 0xFE, 0xF9, 
	0xA1, 0x32, 0x48, 0xEB, 0x8E, 0xFF, 0xFC, 0xF0, 0x5E, 0x46, 
	0x69, 0x99, 0x5D, 0x5D, 0xFD, 0xFD, 0xEC, 0x3F, 0x32, 0x52, 
	0x1A, 0xBB, 0x3C, 0x7B, 0x7D, 0x71, 0xCC, 0x47, 0x6D, 0x7D, 
	0xDF, 0x16, 0xA3, 0xA3, 0x28, 0x0C, 0x58, 0xAA, 0x02, 0x47, 
	0x30, 0xDE, 0xD7, 0x4D, 0x1B, 0xF0, 0x9B, 0x86, 0xA1, 0xAB, 
	0xEF, 0x17, 0xB9, 0xA9, 0x34, 0xE6, 0x56, 0x47, 0x83, 0x3D, 
	0xF2, 0xA4, 0xCD, 0x27, 0x2D, 0x9C, 0xB4, 0xEA, 0x93, 0x7D, 
	0x3E, 0xD9, 0xC1, 0x49, 0xB3, 0x36, 0x69, 0x59, 0x7C, 0xD2, 
	0xC6, 0x49, 0xA3, 0x3E, 0xD9, 0xE5, 0x93, 0x0E, 0x4C, 0x9A, 
	0xFB, 0xB5, 0xC9, 0x8E, 0x20, 0xA8, 0x8B, 0x93, 0xFD, 0xFA, 
	0xA4, 0x20, 0xA8, 0x87, 0x93, 0xBD, 0xFA, 0xA4, 0x20, 0xA8, 
	0x8F, 0x93, 0xDD, 0x62, 0xD2, 0xE4, 0x93, 0xB6, 0x03, 0x93, 
	0x17, 0x31, 0xB2, 0x69, 0x1A, 0xF5, 0xB9, 0x7D, 0x9A, 0x43, 
	0x2E, 0xF7, 0x6B, 0x53, 0x4E, 0x87, 0xA6, 0x90, 0xC7, 0x7E, 
	0x7D, 0xAA, 0x47, 0x53, 0xC8, 0x61, 0xAF, 0x36, 0xD5, 0x35, 
	0x69, 0x0A, 0xF9, 0xAB, 0xD3, 0xD1, 0xE5, 0x74, 0x20, 0x77, 
	0x4E, 0x7D, 0x8A, 0x93, 0x81, 0xBC, 0xD9, 0xB5, 0xA9, 0x1E, 
	0x27, 0x03, 0x39, 0x13, 0x3A, 0x9A, 0xB8, 0xFF, 0xBA, 0x03, 
	0x87, 0x08, 0xD8, 0xDD, 0xDB, 0x2C, 0x27, 0x9F, 0x50, 0x8F, 
	0x3F, 0x9C, 0x5D, 0xAA, 0xBA, 0x89, 0xBB, 0xC0, 0x56, 0x46, 
	0x8F, 0x59, 0xCE, 0x6E, 0x55, 0x69, 0xE1, 0x9B, 0x45, 0x8C, 
	0xDE, 0x33, 0x36, 0x61, 0xED, 0x55, 0x9A, 0xDC, 0xA4, 0xDE, 
	0xAD, 0x32, 0x4A, 0x7D, 0x55, 0x6F, 0x99, 0x7A, 0xCB, 0xD2, 
	0xC7, 0xAA, 0xAA, 0xAB, 0xE7, 0x49, 0x14, 0x28, 0xAF, 0x93, 
	0xFB, 0x18, 0x9E, 0x3F, 0x24, 0x37, 0x37, 0x11, 0x83, 0x87, 
	0xD3, 0x47, 0x1F, 0xDA, 0x09, 0x02, 0xA6, 0xAD, 0xEC, 0x2E, 
	0x64, 0xF7, 0x2B, 0x5B, 0xEB, 0xAB, 0xEE, 0xF6, 0xAE, 0xD2, 
	0x9B, 0xEF, 0xAC, 0x3A, 0xFE, 0xF3, 0x2F, 0x05, 0x34, 0x36, 
	0x5F, 0xE4, 0x62, 0x61, 0xE7, 0x65, 0x4A, 0x68, 0xF0, 0xB7, 
	0x34, 0x59, 0xCC, 0x95, 0xE3, 0x6A, 0xF7, 0x64, 0x05, 0xF6, 
	0x9F, 0xF3, 0x2C, 0x4F, 0x19, 0xF0, 0xF8, 0x3B, 0x7B, 0x44, 
	0xAB, 0x47, 0x22, 0x6C, 0xBD, 0xE5, 0xAC, 0x9D, 0x56, 0xDE, 
	0x84, 0x51, 0x54, 0xAE, 0xB1, 0xD6, 0xAF, 0x81, 0xDF, 0x95, 
	0x25, 0x48, 0x61, 0x0D, 0x4F, 0x77, 0x89, 0xA4, 0x3E, 0x5B, 
	0xA0, 0xE9, 0x6E, 0x06, 0x20, 0xB0, 0x48, 0x2B, 0x2E, 0xAF, 
	0x94, 0x51, 0xCE, 0xF7, 0xF5, 0x28, 0xFC, 0xE0, 0xC4, 0x36, 
	0xCA, 0xB2, 0xFA, 0xBA, 0xDA, 0x28, 0x76, 0x2B, 0x34, 0xA1, 
	0x2D, 0x81, 0x80, 0x89, 0xE4, 0x5E, 0x9A, 0xAB, 0x93, 0xA2, 
	0x7B, 0x16, 0x07, 0xD8, 0x01, 0xCF, 0x46, 0xE7, 0x3D, 0x5E, 
	0xE4, 0x89, 0x72, 0x11, 0xE7, 0x2C, 0xBD, 0xF3, 0x22, 0x55, 
	0x60, 0xFC, 0xC3, 0x8B, 0x83, 0xE4, 0x96, 0x7A, 0x25, 0xC2, 
	0xF7, 0x88, 0xFE, 0xFD, 0x74, 0x5A, 0x21, 0xA8, 0x82, 0xFF, 
	0x34, 0x0A, 0xE7, 0x1C, 0xB1, 0x55, 0x19, 0x4E, 0xE2, 0x3C, 
	0x4D, 0x22, 0x3E, 0xD3, 0xEA, 0x0B, 0x6E, 0x4F, 0x17, 0x39, 
	0x0A, 0xB9, 0x30, 0x10, 0xA0, 0x42, 0xEA, 0xBE, 0xF9, 0x70, 
	0x22, 0xF5, 0x3E, 0xA4, 0x5E, 0x9C, 0x85, 0x79, 0x98, 0xC4, 
	0xC0, 0xE2, 0x23, 0x12, 0x83, 0xCA, 0xD9, 0x27, 0x1C, 0x95, 
	0xD9, 0xAB, 0x24, 0x93, 0xB6, 0x5D, 0x45, 0xDE, 0xA3, 0x72, 
	0xE9, 0xF9, 0x29, 0x40, 0xA6, 0xF0, 0x8A, 0xEC, 0xE0, 0xA0, 
	0x8A, 0x22, 0x49, 0xE6, 0x2B, 0x06, 0x27, 0x44, 0x2C, 0x24, 
	0xCB, 0x25, 0xF1, 0x36, 0x81, 0x85, 0x4B, 0x2E, 0xFF, 0x60, 
	0x7E, 0x92, 0x06, 0x1C, 0xAA, 0xA6, 0xF2, 0x63, 0x63, 0x39, 
	0x3B, 0x4A, 0x16, 0xA9, 0xCF, 0x4A, 0x0D, 0x8C, 0xD5, 0xCB, 
	0xBD, 0x33, 0x05, 0x8E, 0x13, 0x6A, 0xE1, 0x10, 0x21, 0x3F, 
	0x30, 0x45, 0x5B, 0xF4, 0x3B, 0xA2, 0xB5, 0x45, 0xEB, 0x88, 
	0xB6, 0x8B, 0x24, 0xB4, 0x64, 0xF5, 0xB5, 0x7E, 0x58, 0x79, 
	0xD0, 0xFB, 0xE8, 0xA5, 0x8F, 0x4A, 0x1E, 0xDE, 0x86, 0xF1, 
	0x8D, 0x62, 0x19, 0xBF, 0xD6, 0x46, 0x1C, 0x18, 0xD9, 0x52, 
	0xCB, 0xA4, 0xA5, 0x20, 0x24, 0x35, 0x19, 0xF0, 0xCF, 0xDC, 
	0xCA, 0x38, 0x7B, 0x62, 0x97, 0xF2, 0x31, 0x89, 0x16, 0xB7, 
	0xA4, 0x3A, 0x43, 0x1E, 0x3E, 0xF1, 0x22, 0x2F, 0xF6, 0xCB, 
	0x71, 0xCB, 0x2E, 0x26, 0xDE, 0xB2, 0x3B, 0x16, 0x65, 0xD2, 
	0x7A, 0x49, 0xCF, 0x7F, 0x78, 0x39, 0x37, 0x82, 0xB1, 0xC0, 
	0x04, 0x12, 0x0E, 0x1F, 0xE0, 0xF7, 0x75, 0x88, 0x5A, 0xFD, 
	0x14, 0xCE, 0x71, 0xE8, 0xF5, 0xC7, 0x33, 0x95, 0x9B, 0x12, 
	0x3F, 0xDF, 0xE1, 0x20, 0x55, 0xDF, 0x40, 0x30, 0x64, 0x99, 
	0xA4, 0x50, 0x8D, 0xC3, 0xD9, 0x34, 0x5D, 0x8B, 0x0C, 0x57, 
	0x1E, 0x2C, 0xC0, 0x2D, 0x10, 0x19, 0xCC, 0xA5, 0x91, 0xAF, 
	0xF8, 0x76, 0xB9, 0xAE, 0x2B, 0xD6, 0x75, 0x00, 0x76, 0xE2, 
	0x2F, 0x88, 0x9F, 0x0E, 0xE7, 0xE7, 0x22, 0x0D, 0xCB, 0x2E, 
	0x4C, 0x8F, 0x58, 0x9C, 0x25, 0xA9, 0xF2, 0x9B, 0x17, 0xC6, 
	0x34, 0x2A, 0xF1, 0x66, 0x04, 0xD7, 0xF0, 0xDB, 0xA5, 0x5F, 
	0xD3, 0xE2, 0x4D, 0x1F, 0x9A, 0x89, 0xD8, 0x39, 0x5B, 0xE4, 
	0x39, 0x8F, 0x7C, 0xF2, 0x2E, 0x73, 0xCF, 0x31, 0xA8, 0xE9, 
	0xF2, 0xA6, 0xE7, 0x50, 0xB3, 0xCF, 0x7B, 0x90, 0x0F, 0xF0, 
	0xD6, 0x12, 0xAD, 0x58, 0x0C, 0xA7, 0x3D, 0xB5, 0x96, 0xE8, 
	0x77, 0xC4, 0x6E, 0x47, 0xAC, 0xEF, 0x59, 0x4E, 0xB1, 0x5F, 
	0x6C, 0xB0, 0xC5, 0x4A, 0x0B, 0x47, 0x04, 0x49, 0x9F, 0x66, 
	0x61, 0xCE, 0x64, 0xDD, 0xCA, 0x84, 0x01, 0x68, 0xE3, 0x77, 
	0x6C, 0xFB, 0xBC, 0x85, 0x4C, 0x80, 0xB7, 0x96, 0x68, 0x6D, 
	0xD1, 0x76, 0x79, 0x6B, 0x8B, 0x79, 0x5B, 0xEC, 0xB3, 0xC5, 
	0x3E, 0x47, 0x8C, 0x3B, 0x62, 0x9F, 0x23, 0xF6, 0x39, 0x62, 
	0x5F, 0x57, 0xCC, 0x77, 0xC5, 0xBE, 0x9E, 0xE8, 0xF7, 0x44, 
	0xBF, 0x4F, 0x7D, 0x61, 0xA4, 0x6F, 0xC3, 0x29, 0xC5, 0x23, 
	0x7B, 0xA9, 0xA0, 0xDF, 0xBC, 0xDB, 0x5B, 0x6F, 0x65, 0x8C, 
	0xAB, 0x47, 0x1A, 0x3A, 0x5F, 0x30, 0x49, 0xAB, 0x14, 0xEC, 
	0xBC, 0x2C, 0x97, 0x86, 0x46, 0x5E, 0xBE, 0x48, 0x3D, 0x34, 
	0xDC, 0x42, 0x12, 0xEF, 0x92, 0xF4, 0x16, 0xFC, 0x15, 0x4C, 
	0x94, 0x65, 0x7C, 0x92, 0x05, 0x92, 0xD1, 0x9D, 0x78, 0x69, 
	0x46, 0xE1, 0xE3, 0xFB, 0x5E, 0xB9, 0x0F, 0xEE, 0x0C, 0xC9, 
	0x5E, 0xA2, 0x7C, 0xF0, 0xA2, 0x08, 0xCF, 0x13, 0x3C, 0x55, 
	0xC5, 0xA1, 0xAF, 0x96, 0x67, 0xB8, 0xCA, 0x13, 0x81, 0x3D, 
	0xEC, 0x16, 0xDB, 0xB8, 0x97, 0x15, 0xDB, 0xC8, 0xC9, 0x38, 
	0xF6, 0xD3, 0x59, 0x9A, 0xDC, 0x7A, 0x68, 0xC8, 0xCA, 0x88, 
	0xE5, 0x39, 0x44, 0x09, 0x4E, 0x0C, 0x46, 0x16, 0xE6, 0x7B, 
	0x78, 0x3E, 0x01, 0x4B, 0x77, 0x18, 0x21, 0xC1, 0x0D, 0xC0, 
	0x73, 0x20, 0xE3, 0x3C, 0xF1, 0xE2, 0xAF, 0x12, 0x03, 0xA7, 
	0xA7, 0x7F, 0x7E, 0x7F, 0x2F, 0x4A, 0x62, 0xDD, 0xE6, 0xAB, 
	0x8B, 0x2B, 0x72, 0x4A, 0x87, 0x9B, 0x12, 0x79, 0x31, 0x3F, 
	0x8C, 0x81, 0xB3, 0x84, 0x47, 0x00, 0x04, 0x03, 0xE0, 0x00, 
	0x7E, 0x11, 0xE6, 0xC0, 0x1E, 0x7F, 0x6D, 0x81, 0x21, 0xFC, 
	0xAA, 0xFC, 0x77, 0x82, 0xC1, 0x0F, 0xE1, 0x91, 0x3E, 0xD0, 
	0xE8, 0xE0, 0xD8, 0xA0, 0x88, 0x01, 0x61, 0x13, 0x38, 0xBF, 
	0xF4, 0x1E, 0xC4, 0x40, 0x11, 0xD7, 0x80, 0xD6, 0xEA, 0x12, 
	0x31, 0xBD, 0x31, 0xC2, 0x09, 0x33, 0x17, 0xC0, 0x67, 0x60, 
	0x3B, 0x3C, 0x5E, 0xA9, 0x3C, 0x32, 0x73, 0x1C, 0x11, 0x8D, 
	0x54, 0x70, 0xAC, 0x59, 0xC9, 0x7B, 0x2F, 0xA3, 0x2A, 0xF6, 
	0x5F, 0xB2, 0xDB, 0x24, 0x7D, 0x44, 0x81, 0x62, 0x56, 0x44, 
	0xA9, 0x10, 0x1A, 0x11, 0xEC, 0xC6, 0xE8, 0xB5, 0x11, 0x02, 
	0x9F, 0xB9, 0x62, 0x69, 0x16, 0x82, 0x61, 0x0A, 0x83, 0xE7, 
	0xB4, 0x6F, 0x86, 0x08, 0xE4, 0x89, 0x90, 0xC8, 0xCF, 0x12, 
	0xD1, 0xFD, 0x90, 0x6C, 0x39, 0x77, 0xCC, 0x0F, 0xAA, 0x3A, 
	0x66, 0x3A, 0xDD, 0x23, 0xEF, 0x86, 0xF8, 0xEF, 0x76, 0x44, 
	0x67, 0x8B, 0x23, 0x48, 0xA8, 0xF9, 0x36, 0x23, 0x65, 0x8B, 
	0x86, 0xB7, 0x8E, 0x68, 0x4D, 0xFC, 0xB1, 0x32, 0x4E, 0x04, 
	0xC1, 0x66, 0x2C, 0xB8, 0xF6, 0xFC, 0xAF, 0x0A, 0x47, 0x42, 
	0xE3, 0xEA, 0x27, 0x2F, 0xCC, 0x15, 0x0C, 0x60, 0x99, 0x92, 
	0xC1, 0x69, 0x0E, 0x64, 0xF2, 0x8B, 0x92, 0x81, 0x39, 0x49, 
	0x96, 0x27, 0xB7, 0xCA, 0x39, 0x1C, 0xA0, 0x11, 0x04, 0x54, 
	0x3E, 0xF8, 0x2E, 0x51, 0x8E, 0x7D, 0x32, 0x3A, 0xDE, 0xE7, 
	0x09, 0x37, 0x9C, 0xBA, 0x53, 0x62, 0x17, 0x19, 0xBA, 0x88, 
	0x3D, 0x58, 0x71, 0xC7, 0x0D, 0x68, 0xCB, 0xB3, 0x14, 0x33, 
	0x10, 0x05, 0xD0, 0xC7, 0xCC, 0xA7, 0xC3, 0xBD, 0x87, 0xA6, 
	0xEF, 0xC5, 0x2C, 0x52, 0x4E, 0xD2, 0xF0, 0x66, 0x96, 0xC7, 
	0x2C, 0x43, 0xDF, 0x31, 0x05, 0x69, 0x97, 0x61, 0x9A, 0x26, 
	0x78, 0x31, 0x3E, 0x7D, 0x85, 0x83, 0x86, 0x80, 0xD2, 0x78, 
	0x0B, 0xE7, 0x78, 0x9E, 0xD1, 0xB8, 0x56, 0x99, 0x78, 0x13, 
	0xC6, 0x0C, 0x0E, 0xCA, 0xF8, 0x86, 0xC9, 0x93, 0xC5, 0x35, 
	0x01, 0xD2, 0x05, 0xB8, 0x4F, 0x64, 0x70, 0x4D, 0xA8, 0xE5, 
	0x28, 0x28, 0xE7, 0x93, 0x08, 0x64, 0x06, 0xEB, 0x75, 0x4B, 
	0xEF, 0xE8, 0xB6, 0xEE, 0x80, 0x93, 0xF6, 0xF4, 0x3E, 0xF8, 
	0x05, 0x9C, 0xFB, 0x00, 0x1B, 0xAC, 0x16, 0x7C, 0x17, 0x42, 
	0x20, 0x5C, 0x3F, 0xE0, 0xBA, 0x69, 0xF6, 0xE0, 0x8A, 0xA8, 
	0x9B, 0xFB, 0x3A, 0x26, 0x24, 0x18, 0xBA, 0xD0, 0x88, 0x92, 
	0x28, 0x49, 0xCD, 0xE2, 0x01, 0x33, 0x9D, 0xCB, 0x2B, 0xC2, 
	0x71, 0x85, 0xCF, 0xA3, 0xC5, 0x1C, 0xCE, 0x48, 0x9E, 0x2C, 
	0xE1, 0x9A, 0x88, 0x79, 0x31, 0x91, 0xC0, 0x9F, 0x7E, 0x3C, 
	0x51, 0xC2, 0x8B, 0xB0, 0xA9, 0xC0, 0x35, 0xA4, 0x7C, 0xBA, 
	0xA3, 0x27, 0xAB, 0x1C, 0xB3, 0x8A, 0xB1, 0x8F, 0xA0, 0x79, 
	0xD1, 0x5A, 0xA2, 0xED, 0x88, 0xD6, 0x16, 0xAD, 0x23, 0xDA, 
	0xAE, 0x68, 0x7B, 0xA2, 0xED, 0x53, 0x6B, 0x89, 0xFD, 0x96, 
	0xD8, 0x6F, 0x89, 0xFD, 0x96, 0xD8, 0x6F, 0x89, 0xFD, 0x96, 
	0xD8, 0x6F, 0x89, 0xFD, 0x16, 0xDF, 0x0F, 0x96, 0x73, 0x2C, 
	0xDA, 0x13, 0xD1, 0x9E, 0x8A, 0x96, 0xBC, 0xEE, 0xC7, 0x53, 
	0x44, 0x95, 0xA7, 0x1C, 0xB8, 0x87, 0x3F, 0x59, 0xE5, 0x53, 
	0xA7, 0x7C, 0xB2, 0xB7, 0x70, 0x31, 0x91, 0x85, 0xE3, 0xC2, 
	0xD7, 0xA3, 0xDF, 0x09, 0x20, 0xB6, 0xDC, 0x26, 0x20, 0x8F, 
	0xE7, 0x0A, 0x14, 0x7D, 0xCA, 0xA3, 0x27, 0x2F, 0x27, 0x60, 
	0x23, 0x3C, 0x00, 0x30, 0x31, 0xA1, 0x20, 0xCE, 0x93, 0xB0, 
	0x1F, 0xB6, 0xA8, 0xBF, 0xDE, 0xFE, 0x81, 0x94, 0x9D, 0x8D, 
	0xF0, 0x0C, 0x39, 0x3D, 0xAE, 0x99, 0xD2, 0x25, 0x1C, 0xB5, 
	0x84, 0xE1, 0x32, 0x89, 0xC3, 0x3C, 0x49, 0xB7, 0x12, 0x31, 
	0x71, 0x7F, 0xFC, 0xE6, 0x23, 0x92, 0x08, 0xF6, 0x29, 0x44, 
	0x83, 0x84, 0x9F, 0x24, 0x39, 0x04, 0x00, 0x15, 0xA3, 0x32, 
	0xA6, 0x03, 0xEA, 0x1F, 0xE8, 0x89, 0xD0, 0xFE, 0x05, 0xFF, 
	0xFE, 0x43, 0x8C, 0x05, 0xF9, 0x0C, 0x85, 0xC6, 0xC4, 0x04, 
	0x6C, 0xDB, 0xAB, 0x6C, 0xDA, 0x2B, 0xB7, 0xEC, 0x95, 0x1B, 
	0xF6, 0xC4, 0x72, 0x12, 0x17, 0xE4, 0x88, 0x64, 0xEA, 0xD0, 
	0x5A, 0xA2, 0xED, 0x88, 0xD6, 0x16, 0xAD, 0x23, 0xDA, 0xAE, 
	0x68, 0x7B, 0xA2, 0xED, 0x8B, 0x76, 0x5F, 0xB4, 0xA6, 0xB1, 
	0x15, 0xBB, 0x48, 0x07, 0xCA, 0xF0, 0x37, 0x8A, 0xF0, 0xB2, 
	0xCE, 0xDE, 0x26, 0xF7, 0x60, 0x1B, 0x05, 0xC5, 0xFC, 0x44, 
	0xC8, 0xC2, 0xFF, 0xA5, 0x0C, 0xD8, 0xFD, 0xD7, 0x74, 0x11, 
	0x53, 0xDC, 0x53, 0x6E, 0xCE, 0x4E, 0x2E, 0x1A, 0x4C, 0x7B, 
	0x4A, 0x19, 0xE4, 0x2A, 0xB1, 0x12, 0x40, 0x22, 0x7B, 0xCB, 
	0xE2, 0xBC, 0x7D, 0xC3, 0xF2, 0xB3, 0x88, 0xE1, 0xE3, 0xC9, 
	0xE3, 0x45, 0x00, 0x2B, 0x9E, 0xCB, 0x2D, 0x19, 0xCB, 0x8F, 
	0x1B, 0x4C, 0xCF, 0xB5, 0xA7, 0x69, 0x92, 0x36, 0x30, 0xE2, 
	0xC4, 0x4A, 0x18, 0x2B, 0xB9, 0xC6, 0xDA, 0x38, 0x95, 0xE7, 
	0x69, 0x78, 0xBD, 0xC8, 0x59, 0x23, 0xD6, 0xF3, 0x71, 0x3C, 
	0xD1, 0x5C, 0x01, 0x9A, 0x55, 0x20, 0xBC, 0xE5, 0x10, 0xC4, 
	0x9C, 0x00, 0xF9, 0x94, 0xC4, 0x7E, 0x14, 0xFA, 0x5F, 0x07, 
	0xBB, 0x44, 0x96, 0x3A, 0x8D, 0x77, 0x9B, 0x79, 0x73, 0x57, 
	0xD5, 0xDA, 0x19, 0xDC, 0xC9, 0xA2, 0x08, 0x6E, 0x43, 0xC9, 
	0x47, 0xC8, 0x79, 0x1A, 0x9A, 0xBB, 0xAB, 0xFB, 0x8B, 0x14, 
	0x92, 0xEA, 0x81, 0x3A, 0x4F, 0x42, 0xBC, 0x24, 0xA9, 0xCF, 
	0x12, 0x89, 0x73, 0x48, 0xE5, 0xF2, 0x4B, 0x89, 0xAF, 0x02, 
	0xC1, 0x14, 0x6E, 0xD1, 0x03, 0xF5, 0x55, 0x40, 0x7F, 0x54, 
	0x1D, 0x12, 0xFB, 0xE4, 0x2B, 0x83, 0x01, 0x9E, 0xF1, 0xF2, 
	0x6E, 0xEB, 0x9E, 0x2C, 0x61, 0xA0, 0x5A, 0xAB, 0x30, 0x47, 
	0x9B, 0x61, 0xFA, 0xF4, 0x47, 0x82, 0xD9, 0xED, 0x76, 0x57, 
	0x61, 0x9A, 0x15, 0x98, 0x7E, 0x7A, 0xB6, 0x2A, 0x87, 0x52, 
	0x07, 0x3E, 0xDC, 0x3A, 0x72, 0x26, 0xD4, 0x00, 0x88, 0x61, 
	0xA1, 0xBC, 0x75, 0xB4, 0xF5, 0xDE, 0x77, 0xA3, 0x86, 0x3A, 
	0xCB, 0xF3, 0xF9, 0x60, 0x6F, 0xEF, 0xFE, 0xFE, 0xBE, 0x7D, 
	0xDF, 0x69, 0x27, 0xE9, 0x0D, 0x25, 0xF5, 0x7B, 0xD9, 0x1D, 
	0x04, 0xD1, 0x1A, 0x68, 0x0F, 0x21, 0x6B, 0x4F, 0xDE, 0x69, 
	0x83, 0xAB, 0xC1, 0xCF, 0xD3, 0x28, 0xBC, 0xBD, 0x51, 0x35, 
	0x5D, 0x36, 0x03, 0x98, 0x26, 0xF4, 0xAC, 0xED, 0xCD, 0xE7, 
	0x2C, 0x0E, 0x4E, 0x67, 0x61, 0x14, 0x34, 0x64, 0x38, 0x59, 
	0xFE, 0xCE, 0xBB, 0x7D, 0x13, 0x05, 0xD9, 0xD2, 0x5A, 0x58, 
	0x3B, 0x84, 0x53, 0x31, 0x3D, 0xFF, 0x70, 0xF9, 0x76, 0x08, 
	0x67, 0xFE, 0x97, 0xA1, 0xE1, 0x7E, 0x39, 0x30, 0xE1, 0xA7, 
	0xD9, 0xD4, 0xF2, 0xC3, 0x2F, 0x3B, 0x3B, 0x0D, 0x02, 0x8B, 
	0x72, 0x51, 0xC3, 0x78, 0x8E, 0x75, 0x84, 0xA7, 0x30, 0x18, 
	0xA8, 0x04, 0xEA, 0xB3, 0xDA, 0xFC, 0xA2, 0xC7, 0x70, 0x8B, 
	0x93, 0xFB, 0x19, 0x56, 0x0D, 0x06, 0x2A, 0xC9, 0x77, 0x00, 
	0x2C, 0xCD, 0x1F, 0x5C, 0x55, 0x87, 0x23, 0x70, 0xC1, 0x06, 
	0x19, 0x66, 0x7A, 0xD9, 0xF8, 0xCB, 0xE4, 0xA8, 0x7C, 0x1A, 
	0xA8, 0x20, 0x7F, 0xE0, 0x63, 0x49, 0x46, 0x73, 0xA8, 0x1E, 
	0x5C, 0xA7, 0x7B, 0x87, 0xAA, 0x44, 0x78, 0xFA, 0xF6, 0x3A, 
	0x92, 0x14, 0xCD, 0xDA, 0x29, 0x9B, 0xC3, 0xB9, 0xC9, 0x1A, 
	0xEA, 0x37, 0xD0, 0x28, 0x2C, 0xAF, 0xAC, 0xBE, 0x4F, 0x47, 
	0x27, 0x9C, 0x43, 0x7F, 0xC8, 0x05, 0x96, 0x9D, 0xCC, 0xD4, 
	0x26, 0x6B, 0xAA, 0x40, 0x60, 0xAE, 0xE9, 0x7E, 0x95, 0x67, 
	0xBF, 0x4D, 0x24, 0xB7, 0x89, 0xE2, 0xE1, 0xA5, 0x97, 0xCF, 
	0xDA, 0xD3, 0x28, 0x01, 0xD9, 0x98, 0xA8, 0x0E, 0x22, 0xB4, 
	0x1D, 0xB1, 0xF8, 0x26, 0x9F, 0xB5, 0x4C, 0xAD, 0xA9, 0xFE, 
	0xAA, 0xBA, 0xE4, 0x62, 0x43, 0x92, 0xC9, 0xCC, 0x56, 0x35, 
	0xB7, 0xB2, 0xE8, 0xD0, 0x04, 0xA1, 0xC5, 0x12, 0x8A, 0xEA, 
	0xAC, 0x51, 0xF0, 0x9E, 0x4F, 0x96, 0x4F, 0x03, 0x63, 0x38, 
	0xCC, 0x8F, 0x8A, 0xAB, 0xCA, 0x80, 0xA7, 0xC4, 0x0A, 0x10, 
	0x0B, 0xE2, 0xD1, 0x74, 0xD0, 0x80, 0xAF, 0xC7, 0xD4, 0xC6, 
	0x55, 0x4D, 0x14, 0xEE, 0xA9, 0x06, 0x11, 0xB0, 0x4C, 0x2C, 
	0xEA, 0xB0, 0xAB, 0x09, 0x34, 0xA9, 0x7A, 0xFE, 0x38, 0x07, 
	0x3D, 0x80, 0xE7, 0xE7, 0x98, 0xC3, 0x73, 0x0D, 0xA8, 0x2D, 
	0x18, 0x0F, 0x73, 0x54, 0xD0, 0x6B, 0x16, 0x31, 0xCC, 0xA1, 
	0x54, 0x3F, 0xF2, 0xB2, 0x0C, 0x90, 0xB2, 0x20, 0x27, 0x5D, 
	0xBC, 0x80, 0xC6, 0x9F, 0x3F, 0x6E, 0x89, 0xE7, 0xF4, 0xAA, 
	0x44, 0x74, 0x9A, 0xCC, 0x1F, 0x7F, 0x0C, 0x4D, 0x18, 0x67, 
	0x5B, 0xA2, 0xB9, 0x78, 0x37, 0x2A, 0xF1, 0x5C, 0xC4, 0x19, 
	0x4B, 0x73, 0x09, 0x13, 0x80, 0x51, 0x04, 0x36, 0xB7, 0x88, 
	0x8C, 0xE9, 0xD0, 0xD0, 0x43, 0x30, 0xF2, 0xF0, 0x60, 0xF4, 
	0xFB, 0xE7, 0xCB, 0xE3, 0xBF, 0x8E, 0x4F, 0x3F, 0x5C, 0xBC, 
	0x7F, 0x37, 0x72, 0x43, 0xB0, 0xF7, 0x70, 0xDA, 0x20, 0x51, 
	0x13, 0x51, 0xD9, 0xDC, 0x8B, 0x85, 0xAD, 0x4F, 0x63, 0x9F, 
	0x68, 0x69, 0x11, 0x2D, 0xF0, 0x1B, 0x0A, 0xFA, 0x57, 0x97, 
	0x62, 0x65, 0x68, 0x75, 0x29, 0x68, 0x37, 0xDC, 0xD9, 0x41, 
	0x1D, 0x7F, 0xFB, 0x76, 0xFE, 0xE9, 0x6E, 0xCC, 0x26, 0x3B, 
	0x3B, 0xBC, 0x05, 0xDD, 0x4B, 0x8F, 0xE3, 0x10, 0x7A, 0xC6, 
	0x2F, 0xC3, 0x86, 0xE9, 0x54, 0x06, 0xC7, 0xC6, 0x44, 0xD3, 
	0x82, 0xF4, 0x4D, 0x3C, 0x42, 0xB3, 0xD6, 0x43, 0xCD, 0x65, 
	0x51, 0xC6, 0x14, 0xA0, 0xF7, 0x97, 0x14, 0x9C, 0x62, 0x68, 
	0x92, 0x45, 0x7A, 0xC3, 0x22, 0x48, 0xD7, 0xC9, 0xD5, 0x5C, 
	0x20, 0xD6, 0xDB, 0x64, 0x3A, 0x04, 0x57, 0x12, 0x36, 0xFC, 
	0x86, 0x2F, 0x88, 0xBC, 0x89, 0xF2, 0x7C, 0x96, 0xE2, 0x1E, 
	0xD9, 0x44, 0xF5, 0xF8, 0x19, 0x96, 0x61, 0xEF, 0x7F, 0x16, 
	0x2C, 0x7D, 0x1C, 0x81, 0xA9, 0xF9, 0x90, 0x30, 0x1C, 0x47, 
	0x51, 0x43, 0x05, 0xCF, 0xC8, 0xC0, 0xA8, 0x41, 0x11, 0x6E, 
	0x7A, 0x10, 0x0B, 0xB7, 0x70, 0x53, 0x90, 0x7F, 0x3C, 0x4E, 
	0x27, 0xC2, 0x17, 0xEF, 0xC2, 0x2C, 0xBC, 0x0E, 0xA3, 0x30, 
	0x7F, 0x1C, 0xAA, 0xF4, 0x0C, 0x47, 0xA8, 0x1B, 0x66, 0xA9, 
	0x3F, 0x64, 0xFA, 0x17, 0x6C, 0xF2, 0x25, 0x01, 0xDC, 0x5A, 
	0x88, 0x00, 0x2E, 0xB4, 0x6F, 0xDF, 0x1A, 0xFC, 0x61, 0x38, 
	0x9E, 0x68, 0x7A, 0x29, 0xC8, 0x21, 0x3E, 0x21, 0x0C, 0x21, 
	0x72, 0x7A, 0x1C, 0x23, 0xB4, 0xC9, 0x51, 0xAD, 0x3F, 0x18, 
	0x4F, 0xF4, 0x32, 0x8A, 0xB8, 0xFF, 0x3F, 0x6C, 0xCD, 0xC2, 
	0x20, 0x60, 0xB1, 0xBA, 0xE4, 0x83, 0x7C, 0x58, 0x62, 0x03, 
	0xC2, 0xC8, 0x92, 0x76, 0xE4, 0xA4, 0xA4, 0x48, 0xE6, 0x3D, 
	0xCC, 0x1B, 0xDA, 0xD3, 0x7D, 0x1A, 0xE6, 0xEC, 0x74, 0x34, 
	0x6A, 0x2C, 0x89, 0x65, 0x85, 0x35, 0xC0, 0x52, 0xA0, 0x2B, 
	0x07, 0xBA, 0xF2, 0x83, 0xF3, 0x4F, 0x7E, 0x41, 0x59, 0x0E, 
	0x94, 0x3D, 0x71, 0xAE, 0x9E, 0xCC, 0xC1, 0x18, 0x2B, 0x9C, 
	0x26, 0x5E, 0xCD, 0x2C, 0x78, 0x76, 0xE0, 0xD9, 0x81, 0xE7, 
	0x0E, 0x3C, 0xF7, 0x20, 0x51, 0xEC, 0xD9, 0x13, 0xDD, 0x96, 
	0xD6, 0x38, 0x83, 0x71, 0xDF, 0xD0, 0xFB, 0xF0, 0xD4, 0x1D, 
	0x8C, 0xBB, 0x70, 0xFD, 0x83, 0xA7, 0x1E, 0xCC, 0x77, 0xE9, 
	0xED, 0xD6, 0x04, 0x12, 0xCD, 0xC1, 0x18, 0x22, 0x3F, 0x64, 
	0x95, 0xD8, 0x41, 0xE8, 0xFB, 0x70, 0x51, 0xC5, 0xEB, 0x92, 
	0xE9, 0xD0, 0x32, 0x78, 0x80, 0x9D, 0x16, 0xAD, 0x85, 0x8D, 
	0x36, 0x4D, 0xED, 0x8B, 0x29, 0x0B, 0x77, 0x03, 0xDA, 0x0E, 
	0x3E, 0xC3, 0x66, 0x7C, 0xB9, 0x85, 0x14, 0x58, 0x40, 0x9A, 
	0x63, 0x19, 0x7C, 0xBC, 0x43, 0xE3, 0x0E, 0x51, 0x0C, 0xA4, 
	0x75, 0x7B, 0x0E, 0x1F, 0x77, 0x68, 0x1C, 0xBA, 0xF0, 0x4C, 
	0xC4, 0xC1, 0xA2, 0x3E, 0x3C, 0x03, 0x16, 0xA7, 0x0F, 0x84, 
	0xE2, 0x9A, 0x3E, 0xC0, 0xA7, 0x8D, 0x80, 0xD1, 0xE9, 0x74, 
	0x80, 0x4F, 0xC4, 0x68, 0x43, 0x9A, 0x0C, 0x2B, 0x3B, 0x80, 
	0xD1, 0x82, 0x34, 0xB9, 0xD7, 0xEF, 0x41, 0x07, 0x50, 0xC2, 
	0x03, 0x90, 0x61, 0x42, 0x07, 0xC5, 0x61, 0x43, 0xF6, 0x6C, 
	0xE1, 0x16, 0x40, 0xEA, 0x18, 0xF8, 0x92, 0xCC, 0x82, 0x4E, 
	0x1F, 0x67, 0xE8, 0x4D, 0x1A, 0x74, 0xF6, 0x91, 0x79, 0x10, 
	0x18, 0x02, 0x75, 0x0C, 0x7A, 0xE5, 0xE4, 0xC0, 0x33, 0xBD, 
	0xA4, 0x43, 0x1A, 0x1D, 0xC4, 0x80, 0x6F, 0xC8, 0xA8, 0x03, 
	0x70, 0x3A, 0xBD, 0x1E, 0x0C, 0x62, 0x07, 0x28, 0xEE, 0x3B, 
	0xA6, 0xDE, 0xE9, 0x02, 0xBA, 0x2E, 0xEC, 0xC1, 0x57, 0x73, 
	0xA6, 0x0D, 0xBC, 0x77, 0x4D, 0xDE, 0xB1, 0x2C, 0x40, 0xD7, 
	0x83, 0x99, 0x7D, 0x21, 0x75, 0x1C, 0x07, 0xB1, 0xA3, 0xA0, 
	0x7B, 0xA8, 0x3A, 0x0B, 0xB8, 0x80, 0xE7, 0x3E, 0x22, 0x84, 
	0xEC, 0xDE, 0x42, 0x5A, 0xFB, 0xB0, 0xA8, 0xDF, 0xB3, 0x74, 
	0xBB, 0xDF, 0x9D, 0x3C, 0xBB, 0xD9, 0x7D, 0x98, 0xFB, 0x33, 
	0x30, 0x2D, 0x1F, 0x83, 0x8B, 0x3D, 0xD1, 0x9E, 0x02, 0x36, 
	0xF5, 0x16, 0x51, 0x3E, 0x80, 0x78, 0x12, 0x8F, 0xCB, 0xF1, 
	0xC9, 0xD8, 0x9C, 0x68, 0x3C, 0x64, 0x52, 0x6A, 0xA3, 0xA6, 
	0x78, 0x79, 0xD6, 0x9F, 0x1E, 0x06, 0x62, 0x89, 0x39, 0x69, 
	0x55, 0x96, 0x1B, 0x93, 0x3D, 0x4B, 0x7F, 0x2C, 0x66, 0xAD, 
	0xDA, 0xAC, 0x89, 0xB3, 0xE9, 0xC3, 0x00, 0x2E, 0x21, 0xE9, 
	0x23, 0xFE, 0xF2, 0x04, 0xA1, 0x06, 0x41, 0x9F, 0x51, 0xF6, 
	0x3E, 0xA8, 0x6D, 0x7D, 0x16, 0x11, 0x4F, 0x26, 0xC7, 0x0F, 
	0x53, 0x4A, 0xAC, 0x9F, 0x7C, 0x89, 0x22, 0xDD, 0x97, 0x08, 
	0xD0, 0xD3, 0x3A, 0xF8, 0x3D, 0x0B, 0x92, 0x3D, 0x21, 0x00, 
	0x4C, 0xAA, 0x28, 0xEF, 0x15, 0xB9, 0x69, 0x8A, 0x39, 0x17, 
	0x86, 0x8B, 0x52, 0x2E, 0xBE, 0x07, 0x28, 0xC1, 0x96, 0xAB, 
	0x2B, 0x47, 0x8D, 0x8D, 0xE2, 0x68, 0xD4, 0xD0, 0xB5, 0x3A, 
	0x86, 0x56, 0x93, 0x49, 0x5D, 0xC2, 0x2D, 0x87, 0x96, 0x7C, 
	0x57, 0x30, 0x00, 0x6A, 0x83, 0x6C, 0x00, 0x02, 0x9E, 0x31, 
	0x40, 0xBB, 0x7B, 0x0D, 0x39, 0xE6, 0x57, 0x97, 0xC8, 0x06, 
	0x27, 0xE2, 0xAD, 0x25, 0x5A, 0x7B, 0x7B, 0x36, 0xEA, 0x42, 
	0xEB, 0x54, 0x38, 0xE8, 0x5A, 0x6D, 0x47, 0xD0, 0x88, 0xEF, 
	0xB9, 0x05, 0x51, 0xA6, 0xE5, 0xAC, 0xA3, 0xC2, 0x14, 0xD8, 
	0x3B, 0xA2, 0x75, 0xB6, 0xA7, 0x82, 0xF0, 0x48, 0x88, 0x9B, 
	0x75, 0x73, 0xEA, 0x00, 0xE7, 0x05, 0x21, 0x96, 0x53, 0x12, 
	0x62, 0xAC, 0x15, 0x47, 0x6F, 0x7B, 0xC4, 0x16, 0xE8, 0xE0, 
	0x25, 0xBC, 0x76, 0xAB, 0xD7, 0x2F, 0x45, 0x60, 0x5B, 0x4B, 
	0x11, 0x38, 0xBD, 0x75, 0x98, 0xF7, 0x37, 0x60, 0xDE, 0xCA, 
	0x7E, 0xCD, 0x5E, 0x5F, 0xC0, 0xD4, 0xFF, 0x0E, 0x14, 0xA3, 
	0xFB, 0x0F, 0x40, 0xE9, 0xD8, 0xEB, 0xD8, 0xEB, 0xFF, 0x1D, 
	0xF6, 0xF6, 0xFB, 0x6B, 0x40, 0x76, 0x36, 0x81, 0x5C, 0xA3, 
	0x2B, 0xA7, 0xA2, 0xAA, 0x96, 0x59, 0x5A, 0xC4, 0xD2, 0x5D, 
	0x3A, 0xA5, 0x41, 0x6C, 0x60, 0x7E, 0x15, 0x6C, 0xD3, 0x31, 
	0xD0, 0xDF, 0xB6, 0x87, 0x2C, 0x93, 0xEF, 0x6C, 0x0A, 0x18, 
	0x6B, 0x25, 0xD2, 0x34, 0xC1, 0xDA, 0x6A, 0x52, 0xE9, 0xFF, 
	0x30, 0xC1, 0x58, 0x8C, 0xAF, 0x90, 0xBB, 0xEF, 0xAC, 0x09, 
	0x29, 0x96, 0xE4, 0xAE, 0xFB, 0x3F, 0x85, 0xA3, 0x69, 0x56, 
	0x5C, 0xB2, 0xD5, 0x33, 0xD6, 0xA0, 0x31, 0x7B, 0x4B, 0x34, 
	0xF6, 0x5A, 0x09, 0x99, 0x3F, 0x6D, 0x33, 0x24, 0xAE, 0x9F, 
	0x92, 0x90, 0x59, 0x93, 0x10, 0x0A, 0xE3, 0x1F, 0x17, 0x51, 
	0xBF, 0x1A, 0xB1, 0x2C, 0x67, 0x03, 0x9A, 0xEF, 0x8B, 0xE8, 
	0x07, 0xC2, 0xB5, 0x59, 0x77, 0x82, 0x7D, 0x3A, 0x4F, 0x1C, 
	0xC4, 0xE8, 0x94, 0x46, 0xBB, 0xB4, 0xDA, 0xBE, 0xFD, 0xE3, 
	0xC2, 0xAB, 0x86, 0xC4, 0x56, 0xAF, 0xDB, 0x76, 0x56, 0x70, 
	0x58, 0x72, 0x28, 0xEC, 0xAC, 0x63, 0xAA, 0xBB, 0x3D, 0x53, 
	0x76, 0x4D, 0x5D, 0x3D, 0x73, 0x05, 0x1F, 0xA6, 0x5F, 0xA5, 
	0x10, 0xAD, 0x9F, 0x08, 0x70, 0xCD, 0x8E, 0x55, 0xF5, 0xBD, 
	0x56, 0xDF, 0xDA, 0xC2, 0xB8, 0xB6, 0x83, 0xD5, 0xAC, 0xC2, 
	0x7A, 0x2E, 0xF2, 0x72, 0x7F, 0x28, 0x96, 0x74, 0xE0, 0x52, 
	0x30, 0x87, 0xAB, 0x00, 0xD6, 0x30, 0x34, 0x71, 0x27, 0x2D, 
	0xB3, 0xF3, 0xB0, 0xC8, 0xCE, 0x8B, 0x6C, 0x27, 0x67, 0x0F, 
	0x35, 0x11, 0x55, 0x2C, 0xCD, 0xEE, 0x34, 0xBB, 0xC6, 0x7F, 
	0x85, 0x2D, 0xF8, 0x29, 0x60, 0x40, 0x56, 0x41, 0xBB, 0x5A, 
	0x5E, 0xEC, 0xCF, 0x92, 0x14, 0xEE, 0xC3, 0xB7, 0x70, 0xE3, 
	0x40, 0xC2, 0x45, 0x7D, 0x8C, 0x97, 0xD8, 0xA6, 0x49, 0x9C, 
	0xB7, 0xEE, 0x79, 0xCD, 0x14, 0xEE, 0x7A, 0x49, 0x14, 0x14, 
	0x83, 0x58, 0x9C, 0x84, 0xA1, 0x8E, 0x03, 0x17, 0x3E, 0x37, 
	0x6D, 0x23, 0x2C, 0x7C, 0xE1, 0x0A, 0xD7, 0x9F, 0xA1, 0x0F, 
	0x97, 0xD2, 0xA5, 0x74, 0x52, 0x62, 0xF0, 0x65, 0x6A, 0x57, 
	0x53, 0xC5, 0xA6, 0xFD, 0x62, 0x62, 0x74, 0x54, 0xEB, 0xD7, 
	0x13, 0x22, 0xC8, 0x9A, 0x9A, 0x20, 0xF2, 0x55, 0x5E, 0x04, 
	0xD9, 0xF8, 0xAA, 0xBD, 0xAC, 0xFC, 0x15, 0xE5, 0xC5, 0x7A, 
	0xF1, 0xAF, 0x3B, 0xC7, 0x3A, 0x3A, 0x69, 0xB7, 0x95, 0xA4, 
	0xF8, 0x1D, 0xDF, 0x40, 0x2C, 0x59, 0xE5, 0x39, 0x6F, 0x9A, 
	0x35, 0x96, 0xDD, 0x82, 0x65, 0xE0, 0x38, 0x08, 0xEF, 0xCA, 
	0x6A, 0x01, 0xDC, 0xA2, 0x9F, 0xE9, 0xCA, 0xCD, 0xF4, 0x54, 
	0x13, 0x57, 0x73, 0x5E, 0x2C, 0xEA, 0xC0, 0xB5, 0x1A, 0xAB, 
	0x0C, 0x52, 0x75, 0x68, 0xF7, 0x00, 0xCB, 0x07, 0x0A, 0xDD, 
	0x0F, 0x87, 0x4B, 0x0E, 0x20, 0xA5, 0x99, 0x3F, 0xB8, 0x92, 
	0x72, 0x06, 0x31, 0x15, 0x87, 0xDC, 0x3B, 0x96, 0xE6, 0xA1, 
	0xEF, 0x45, 0x2D, 0x2F, 0x0A, 0x6F, 0xE2, 0x41, 0x9E, 0xCC, 
	0x5D, 0xF5, 0xF0, 0xD5, 0x6E, 0xB3, 0x01, 0xF4, 0x69, 0xCD, 
	0x5D, 0x65, 0x27, 0xBE, 0xCE, 0xE6, 0xAE, 0x72, 0xB0, 0x87, 
	0x60, 0x0F, 0x95, 0x03, 0x20, 0x4C, 0x09, 0x83, 0xA1, 0x1A, 
	0x5D, 0x47, 0xC1, 0x67, 0x5E, 0xBD, 0x55, 0xA8, 0x40, 0x82, 
	0x43, 0xEA, 0xE1, 0x6E, 0x93, 0x6A, 0x6B, 0xA5, 0x4D, 0x6A, 
	0x4D, 0xF5, 0x60, 0x0F, 0xF6, 0x1C, 0xAA, 0x7A, 0x12, 0x47, 
	0x61, 0xCC, 0xB8, 0x19, 0x66, 0xC3, 0x95, 0x0A, 0x20, 0x00, 
	0xC4, 0x72, 0x9A, 0xA8, 0xFF, 0x15, 0x3D, 0x5E, 0x32, 0xE0, 
	0xFA, 0xE7, 0x05, 0x83, 0x12, 0x74, 0x51, 0x19, 0x9C, 0x46, 
	0x89, 0x97, 0x0F, 0xE8, 0xBD, 0x9B, 0xFA, 0x2C, 0x4A, 0x13, 
	0x99, 0xA6, 0x67, 0xD5, 0x62, 0xB5, 0x9A, 0xC4, 0x5F, 0xD9, 
	0xE3, 0x02, 0x5F, 0x14, 0xD0, 0x45, 0x76, 0x97, 0x18, 0xA0, 
	0x02, 0xC5, 0xAE, 0x26, 0xC9, 0x8F, 0xC8, 0xCF, 0x67, 0x61, 
	0xD6, 0x26, 0x74, 0x9A, 0xAB, 0x6A, 0xCF, 0x00, 0x32, 0xD5, 
	0xBD, 0xE5, 0x5D, 0x38, 0x02, 0xE7, 0x8A, 0x0E, 0x2A, 0x75, 
	0x38, 0x37, 0x2A, 0x3C, 0xCC, 0x93, 0x15, 0x58, 0xD6, 0x8E, 
	0xA6, 0xA7, 0xAA, 0x4E, 0x75, 0x4E, 0xAC, 0x1C, 0xE6, 0x54, 
	0x39, 0x8C, 0x38, 0xB1, 0x08, 0x99, 0x5F, 0xC5, 0x73, 0x3D, 
	0x12, 0xB8, 0x08, 0xC2, 0x75, 0x2A, 0x03, 0xF0, 0xA3, 0x94, 
	0x0A, 0x25, 0xF2, 0x5D, 0x9C, 0x28, 0x00, 0x67, 0x0F, 0x38, 
	0xCA, 0x8C, 0xEA, 0x07, 0xCB, 0x82, 0xEA, 0xE2, 0x56, 0x5D, 
	0x56, 0x53, 0xA1, 0xF3, 0xAC, 0xE9, 0x49, 0xDD, 0xBA, 0xB2, 
	0xFC, 0x35, 0x0A, 0x0D, 0x39, 0x43, 0xAE, 0x4C, 0xE3, 0x30, 
	0x22, 0x56, 0x80, 0x8C, 0x40, 0x8F, 0xD9, 0xBD, 0xF2, 0x7E, 
	0x8E, 0x85, 0x81, 0x06, 0x2F, 0x21, 0x66, 0x03, 0x05, 0xE8, 
	0xD6, 0x23, 0xDD, 0xD0, 0x2B, 0xDC, 0x0F, 0x87, 0xD1, 0x91, 
	0x39, 0x30, 0xB4, 0x35, 0xA5, 0xCB, 0x65, 0x8D, 0x38, 0xA9, 
	0xEE, 0xA1, 0x8A, 0x17, 0xD3, 0x03, 0xD1, 0x26, 0xC0, 0xC6, 
	0x8A, 0xC6, 0xFC, 0x19, 0xBE, 0x03, 0x25, 0x3F, 0x2B, 0xA0, 
	0x70, 0xE5, 0x01, 0xD9, 0xBB, 0x10, 0x07, 0x2B, 0x6A, 0x72, 
	0x65, 0xD1, 0x84, 0x73, 0x80, 0x85, 0xB5, 0xCE, 0xD2, 0x53, 
	0x64, 0x59, 0xE6, 0x69, 0x54, 0x70, 0x2D, 0xFB, 0x8E, 0x2A, 
	0xBE, 0x76, 0x8B, 0x58, 0xAA, 0x5C, 0x5C, 0x95, 0x5F, 0x41, 
	0xA8, 0x9C, 0x42, 0x6F, 0xB5, 0xAC, 0x7C, 0x78, 0x71, 0x35, 
	0x00, 0xD7, 0xB8, 0x3E, 0xE4, 0x15, 0x66, 0x1D, 0x45, 0x68, 
	0x2F, 0x25, 0xB8, 0xA6, 0xCE, 0x8D, 0xA8, 0x2F, 0xAE, 0x50, 
	0xFB, 0x42, 0x35, 0xD2, 0x40, 0xA5, 0xD2, 0xED, 0xC8, 0x85, 
	0x6E, 0x5C, 0x74, 0x3A, 0xBD, 0x81, 0x30, 0x35, 0x8E, 0x26, 
	0x2B, 0xF5, 0xED, 0xCE, 0x61, 0x74, 0xA4, 0x2A, 0x6D, 0x05, 
	0x38, 0x53, 0xDD, 0x5A, 0x11, 0xBE, 0xA8, 0x7E, 0x8B, 0x9F, 
	0xC3, 0xD1, 0xE2, 0x3A, 0xC6, 0x8F, 0x11, 0xBC, 0xEC, 0xEB, 
	0xE0, 0x87, 0x08, 0xCF, 0x68, 0xA3, 0x44, 0xB8, 0x34, 0xF0, 
	0x7D, 0xC2, 0xCD, 0xED, 0x08, 0x47, 0x0D, 0xF2, 0xCA, 0x12, 
	0xFF, 0x66, 0x56, 0x2E, 0x2E, 0x41, 0x9C, 0xE3, 0x83, 0xE8, 
	0xFD, 0xC6, 0xE4, 0x70, 0x08, 0xC6, 0x25, 0x0F, 0x1C, 0x0C, 
	0x4D, 0xBB, 0xE2, 0x81, 0x14, 0x1D, 0x65, 0xF5, 0x2E, 0x57, 
	0xC3, 0x69, 0x27, 0x54, 0x2A, 0x87, 0x53, 0x99, 0x5D, 0x58, 
	0x7B, 0x16, 0x4B, 0xF1, 0x68, 0xD9, 0xE7, 0x11, 0xC9, 0x9F, 
	0x31, 0xFF, 0xEB, 0x75, 0xF2, 0x80, 0x61, 0x4D, 0x14, 0x3E, 
	0xB9, 0x65, 0xC2, 0xC2, 0x8B, 0xAB, 0xEB, 0x32, 0xB0, 0xAC, 
	0xD4, 0xE9, 0x78, 0x6C, 0xA1, 0xED, 0x2C, 0x38, 0xDA, 0x15, 
	0xC5, 0xC8, 0xDD, 0xC1, 0x2E, 0xAF, 0xDF, 0xED, 0x82, 0x25, 
	0x63, 0x5C, 0x28, 0x56, 0x20, 0xD1, 0x28, 0x40, 0xAC, 0xEB, 
	0x96, 0x8F, 0x58, 0xD8, 0x90, 0xE9, 0xBF, 0xAB, 0x7B, 0xF5, 
	0x92, 0x88, 0x42, 0x37, 0x41, 0x08, 0xC9, 0x81, 0xF7, 0x38, 
	0x50, 0x42, 0x8A, 0xC2, 0xAD, 0xEB, 0x28, 0xF1, 0xBF, 0xBA, 
	0xCA, 0x92, 0x30, 0xF4, 0xEC, 0xC6, 0x06, 0x64, 0x47, 0x6A, 
	0x36, 0x4B, 0xEE, 0x41, 0x4B, 0xA2, 0xC6, 0x08, 0x41, 0x9D, 
	0xA8, 0xE4, 0x2A, 0xE1, 0xCB, 0x50, 0x3F, 0xE6, 0x50, 0x92, 
	0xB1, 0x35, 0xD1, 0x48, 0xA5, 0x15, 0x5B, 0x54, 0x56, 0x4C, 
	0xED, 0x6E, 0xD5, 0xD4, 0x88, 0xFA, 0xCF, 0x45, 0xB5, 0x39, 
	0x5A, 0x6A, 0xA0, 0x32, 0xBA, 0xD9, 0xE8, 0x96, 0xA4, 0x47, 
	0x4D, 0x93, 0xAC, 0xEE, 0x6E, 0xA3, 0xD5, 0xF1, 0x32, 0x50, 
	0x95, 0xC6, 0xC6, 0x88, 0xA5, 0xA1, 0x17, 0x69, 0x2A, 0x3F, 
	0x73, 0xEF, 0xE4, 0xEA, 0xF4, 0xB2, 0x6A, 0x1E, 0x17, 0x09, 
	0xD5, 0x86, 0x2A, 0x79, 0x4C, 0xF2, 0x49, 0xAB, 0xEF, 0x86, 
	0x8C, 0x5F, 0x86, 0xB0, 0x2F, 0xAD, 0xFA, 0xE7, 0x0C, 0x5D, 
	0xD0, 0xE5, 0xC9, 0xDC, 0x9A, 0x40, 0xCE, 0xA2, 0xE8, 0x26, 
	0xF4, 0x3F, 0x97, 0x2F, 0x9C, 0xE8, 0x37, 0x2E, 0xBC, 0x70, 
	0xC3, 0x6C, 0x11, 0x3B, 0x07, 0x2A, 0xD6, 0x7C, 0x69, 0x76, 
	0x32, 0xA6, 0x69, 0x6C, 0x62, 0x6C, 0x8C, 0xC9, 0xB0, 0xF1, 
	0xC2, 0xE4, 0x8E, 0xE9, 0x68, 0xDF, 0xA4, 0x93, 0xF0, 0xD0, 
	0x38, 0x32, 0xBB, 0x10, 0xE3, 0x5D, 0xB5, 0x38, 0xB7, 0xFC, 
	0xE2, 0x55, 0x92, 0x74, 0x4C, 0x78, 0xF8, 0x49, 0x8E, 0x01, 
	0x7F, 0x5F, 0x7C, 0x2F, 0x11, 0x43, 0xCF, 0xEC, 0x56, 0x06, 
	0xD0, 0xCC, 0x8C, 0x81, 0xA9, 0xAD, 0x81, 0x99, 0xA4, 0x4A, 
	0x23, 0xC3, 0xAF, 0xAF, 0xF0, 0x3B, 0x98, 0x9F, 0x04, 0x4D, 
	0xA7, 0x13, 0x1D, 0x9E, 0xE1, 0x7A, 0x19, 0x83, 0xFE, 0x36, 
	0x8B, 0x78, 0xCD, 0x64, 0x21, 0x84, 0x50, 0x73, 0x09, 0x5E, 
	0x42, 0xC4, 0x62, 0x3E, 0xD6, 0xF6, 0x82, 0xA0, 0x21, 0xD3, 
	0x0F, 0xE7, 0x97, 0x2A, 0xBD, 0x32, 0xF2, 0x86, 0x63, 0x10, 
	0x10, 0xA4, 0x2F, 0xE0, 0x08, 0x59, 0x2D, 0xD0, 0x65, 0xE0, 
	0x14, 0xD5, 0x2C, 0x43, 0xFC, 0x9F, 0x80, 0x71, 0x36, 0x91, 
	0x33, 0x0D, 0xEE, 0x79, 0x62, 0x02, 0x42, 0x2B, 0xEA, 0x0B, 
	0x13, 0x23, 0x86, 0x4F, 0xDF, 0xBE, 0x19, 0xE4, 0x88, 0x95, 
	0x69, 0x6E, 0xAD, 0xC1, 0xF0, 0xBB, 0xC2, 0xAB, 0xBE, 0x2C, 
	0x22, 0xE9, 0x69, 0xA5, 0x5F, 0x67, 0x84, 0xA9, 0x3A, 0x6F, 
	0x4E, 0xC4, 0xF1, 0xEF, 0x06, 0xF8, 0x7A, 0x77, 0x38, 0x96, 
	0xD7, 0xEA, 0xD1, 0x84, 0x34, 0x1A, 0xCA, 0x1A, 0x5D, 0x2E, 
	0x80, 0x8B, 0x8E, 0x8A, 0x91, 0xA7, 0x4A, 0x2D, 0x84, 0x67, 
	0x19, 0x06, 0xCF, 0x96, 0x40, 0xF1, 0x01, 0xA8, 0x30, 0x48, 
	0x3F, 0x46, 0xA3, 0x4F, 0xDC, 0x03, 0x75, 0x8F, 0x22, 0x21, 
	0x16, 0x96, 0xF5, 0x70, 0x73, 0xF2, 0x40, 0x5B, 0x6A, 0x6F, 
	0xA4, 0x62, 0x7A, 0x23, 0xA5, 0xC9, 0x8E, 0x8D, 0x8B, 0xD6, 
	0x38, 0xF6, 0x7A, 0xF5, 0x6B, 0xBA, 0x3F, 0x4C, 0xDB, 0x5C, 
	0xE9, 0xD9, 0x38, 0x6D, 0x73, 0x73, 0x62, 0xC1, 0x45, 0x1C, 
	0xB0, 0x87, 0x09, 0xF7, 0x98, 0xE2, 0x3E, 0xF6, 0x19, 0x50, 
	0xBD, 0xF8, 0x26, 0xA9, 0x1C, 0x2E, 0xDE, 0xCC, 0xC8, 0xF2, 
	0x95, 0x27, 0xA1, 0xBB, 0x32, 0x8F, 0x7E, 0x0C, 0x2A, 0xF3, 
	0x51, 0xF1, 0x8D, 0x92, 0xE4, 0x75, 0x41, 0x41, 0xDB, 0xD9, 
	0x79, 0x79, 0xBE, 0xEA, 0xE8, 0x7A, 0x5D, 0xCB, 0x3E, 0xFC, 
	0xB8, 0xDC, 0x85, 0x36, 0xC4, 0xBC, 0x46, 0x0C, 0x97, 0x06, 
	0x70, 0x81, 0x9D, 0x9D, 0x5F, 0xC2, 0x65, 0x8C, 0xDB, 0xD9, 
	0x21, 0x03, 0xD8, 0xFE, 0x75, 0x21, 0x81, 0xF9, 0xDE, 0x2B, 
	0x43, 0x7D, 0xF9, 0xA2, 0x50, 0xAF, 0x18, 0x05, 0x4A, 0x42, 
	0x47, 0x5A, 0xEB, 0xDA, 0xE5, 0x0B, 0x20, 0x6E, 0x81, 0xD3, 
	0x3E, 0xC9, 0x6F, 0x38, 0x57, 0xDE, 0xB2, 0xA6, 0xD5, 0xC4, 
	0x41, 0xCA, 0x4E, 0x36, 0x39, 0x2D, 0x38, 0xA4, 0x5F, 0xF5, 
	0x12, 0xFE, 0xFA, 0x32, 0x1E, 0x5A, 0x6E, 0x2C, 0x39, 0x31, 
	0x5C, 0x74, 0x8B, 0x6D, 0xF1, 0x8A, 0x1F, 0x87, 0x28, 0x69, 
	0x4E, 0x5A, 0xB4, 0x3E, 0x4A, 0x01, 0xA5, 0x35, 0xAD, 0xA5, 
	0xF5, 0x58, 0xB5, 0x79, 0xC9, 0xCB, 0x67, 0x42, 0xBA, 0x8C, 
	0xFE, 0xC3, 0x65, 0xD4, 0x77, 0xD7, 0xBD, 0xA2, 0x2F, 0x6E, 
	0x59, 0x11, 0x4F, 0x3F, 0x82, 0xE1, 0x71, 0x9A, 0x7A, 0x8F, 
	0xED, 0x30, 0xA3, 0x76, 0x95, 0x23, 0xB8, 0x76, 0x04, 0x47, 
	0xF5, 0x51, 0x10, 0xD1, 0xA0, 0x3E, 0xA6, 0xDF, 0x0D, 0x5B, 
	0x49, 0xCB, 0xC4, 0x83, 0x13, 0xEF, 0xCD, 0xF8, 0x89, 0xF0, 
	0x70, 0x88, 0x26, 0x90, 0x4C, 0x95, 0xA4, 0x0C, 0x8C, 0xE7, 
	0xA0, 0x83, 0xF3, 0x83, 0xFA, 0xDE, 0x42, 0xAC, 0xE7, 0x3C, 
	0xAF, 0x88, 0x6A, 0x01, 0xA7, 0x8A, 0xFB, 0x7C, 0xA2, 0x9F, 
	0x7F, 0xEF, 0x24, 0x49, 0x6B, 0x3D, 0x74, 0xBE, 0xE1, 0xB9, 
	0xB8, 0xE7, 0x60, 0xDE, 0x40, 0x8A, 0xFA, 0x34, 0x84, 0xA8, 
	0xB7, 0x42, 0xEC, 0x0A, 0xC2, 0x0D, 0xD4, 0xB6, 0x4C, 0x9E, 
	0x6A, 0x6D, 0xBB, 0x78, 0x55, 0x8A, 0x9B, 0xD7, 0x52, 0x64, 
	0x85, 0x1C, 0x47, 0x9F, 0x63, 0x2D, 0x68, 0xDA, 0x30, 0x0E, 
	0x93, 0x9D, 0x1D, 0xF1, 0xED, 0xE8, 0xF8, 0x6E, 0x52, 0x13, 
	0xE7, 0x72, 0xE2, 0x25, 0x41, 0x7E, 0x6A, 0x2E, 0xD7, 0xFD, 
	0x6D, 0x21, 0x02, 0x61, 0xE7, 0x4D, 0x52, 0x76, 0x72, 0x68, 
	0x7C, 0xFB, 0x16, 0xAC, 0x91, 0x04, 0xA4, 0xF5, 0x2B, 0x63, 
	0xA6, 0x4C, 0xFA, 0x7A, 0xBB, 0x42, 0x86, 0x86, 0x8D, 0x35, 
	0x73, 0xE6, 0x64, 0x90, 0x68, 0x1B, 0x38, 0x3B, 0xFF, 0xA7, 
	0xB8, 0x09, 0x24, 0xFA, 0x92, 0xC3, 0xA1, 0x71, 0x64, 0x0D, 
	0xCC, 0xCD, 0x06, 0x0B, 0xE6, 0xBE, 0xAD, 0xC9, 0xCE, 0x7F, 
	0x8A, 0xBE, 0x79, 0x41, 0x5F, 0xB3, 0xF9, 0xFC, 0x4C, 0xE5, 
	0xD3, 0x67, 0xF9, 0xDB, 0xA6, 0xE2, 0x4D, 0xFF, 0x53, 0x51, 
	0x53, 0xA0, 0x0F, 0x90, 0xE4, 0xE8, 0x77, 0x9D, 0x04, 0x8F, 
	0x4F, 0x54, 0x3A, 0x9A, 0x7A, 0xB7, 0x61, 0xF4, 0x38, 0x38, 
	0xC6, 0xF4, 0x58, 0x3F, 0x87, 0x58, 0xC3, 0xB0, 0x76, 0xA4, 
	0x67, 0x5E, 0x9C, 0xB5, 0x32, 0x48, 0x9A, 0xA7, 0x6E, 0xEB, 
	0x9E, 0x5D, 0x7F, 0x0D, 0xF3, 0xD6, 0x3C, 0xC5, 0x1A, 0x98, 
	0x8F, 0x5F, 0x10, 0xB7, 0xBC, 0xE0, 0xCB, 0x22, 0xCB, 0x07, 
	0xEC, 0xC1, 0xF3, 0x73, 0xF7, 0x19, 0xCB, 0x68, 0x95, 0xFC, 
	0x77, 0xD6, 0x51, 0x9E, 0x94, 0x6B, 0x2A, 0x97, 0x0D, 0x94, 
	0x57, 0x1D, 0xFA, 0xA3, 0x64, 0x49, 0x14, 0x06, 0x8A, 0x09, 
	0x59, 0xBD, 0x32, 0x87, 0x7C, 0x0A, 0x9C, 0x6B, 0xE0, 0x60, 
	0xE7, 0xD6, 0x4B, 0x6F, 0xC2, 0x78, 0xA0, 0x58, 0x8E, 0x62, 
	0x28, 0xF0, 0xCF, 0x55, 0xF0, 0x1B, 0xF1, 0x9B, 0x34, 0x59, 
	0xC4, 0x01, 0x47, 0x37, 0x78, 0x75, 0xBD, 0x8F, 0x7F, 0x5D, 
	0x01, 0xB3, 0x95, 0x7A, 0x41, 0xB8, 0xC8, 0xF8, 0xF6, 0x55, 
	0xEC, 0xED, 0xE8, 0x5A, 0x79, 0x2A, 0xB0, 0x03, 0x3E, 0x81, 
	0x19, 0x3F, 0xEE, 0x83, 0x3F, 0x75, 0x20, 0x1D, 0x04, 0xB2, 
	0x82, 0x51, 0x79, 0xC5, 0xE8, 0xCF, 0x92, 0x56, 0x20, 0x8D, 
	0xFE, 0x2E, 0x09, 0x2E, 0x06, 0x36, 0x5C, 0xC4, 0x78, 0x65, 
	0x95, 0x4A, 0x70, 0x3E, 0xC3, 0xCF, 0x1D, 0x61, 0x67, 0x18, 
	0xF3, 0xC2, 0x22, 0x6C, 0xC6, 0xEB, 0xCD, 0x1A, 0xDA, 0xF1, 
	0x7A, 0x8D, 0xC2, 0x5B, 0x11, 0x81, 0x17, 0xF8, 0xD3, 0xA0, 
	0xBF, 0x96, 0xDF, 0xE9, 0x29, 0xEC, 0xE0, 0x35, 0xB3, 0x88, 
	0x4D, 0x73, 0x77, 0x29, 0xFA, 0x7D, 0xFA, 0xB3, 0x4E, 0xF4, 
	0xD6, 0x5A, 0xB6, 0x4B, 0xAE, 0xD7, 0xC8, 0x68, 0x1D, 0xB1, 
	0x51, 0x0A, 0x98, 0xFD, 0x88, 0x79, 0xA9, 0xC0, 0xFC, 0xAC, 
	0xAC, 0x25, 0x6F, 0x66, 0xC3, 0xBA, 0x52, 0xD1, 0x04, 0x6D, 
	0x75, 0xE1, 0x2B, 0x34, 0xE1, 0x72, 0x5D, 0x2B, 0x4F, 0xE6, 
	0xA0, 0x3E, 0xFA, 0x3A, 0x70, 0xCD, 0xE2, 0x99, 0x85, 0x3C, 
	0x97, 0xB5, 0x50, 0xC5, 0xC6, 0x75, 0xB2, 0xCC, 0x95, 0x52, 
	0xE8, 0x05, 0x5A, 0x03, 0xEC, 0x0B, 0xE0, 0xA1, 0x85, 0x15, 
	0x52, 0x30, 0x9D, 0xF5, 0x62, 0x30, 0x98, 0x1D, 0x5C, 0xDB, 
	0xAE, 0xC2, 0xBB, 0xF7, 0xF8, 0xDF, 0xA7, 0xB6, 0x35, 0xBE, 
	0xEC, 0x64, 0x91, 0x2B, 0x4F, 0x73, 0xF1, 0x3F, 0x63, 0x06, 
	0xCA, 0x34, 0x7C, 0x60, 0x01, 0x6E, 0xC6, 0xAF, 0x92, 0x07, 
	0x0A, 0x91, 0x49, 0x95, 0x4D, 0xF1, 0xBC, 0xC6, 0xF4, 0xEC, 
	0xD3, 0xE3, 0x37, 0x8E, 0x51, 0x60, 0x57, 0x04, 0xFA, 0xD2, 
	0x10, 0x4D, 0xD8, 0xA7, 0x70, 0xCA, 0xD7, 0xF1, 0x4B, 0x63, 
	0x01, 0xFE, 0xC7, 0x48, 0x8F, 0x53, 0x10, 0x27, 0x31, 0x6C, 
	0xDF, 0x60, 0xA5, 0x85, 0x74, 0x6C, 0x80, 0x49, 0x8A, 0x11, 
	0xDF, 0xE8, 0x2A, 0xE2, 0x1B, 0xDD, 0x3A, 0xDB, 0xB8, 0x70, 
	0x9D, 0xDD, 0xE2, 0x97, 0x74, 0x4F, 0x52, 0xED, 0x81, 0xD7, 
	0x15, 0x40, 0x73, 0x6D, 0x16, 0xE4, 0x4F, 0x52, 0x41, 0xD7, 
	0x5D, 0x32, 0x0C, 0xAC, 0x4E, 0xA7, 0x53, 0xB7, 0x60, 0xCC, 
	0x50, 0x2C, 0xD0, 0x90, 0xE5, 0x0A, 0x92, 0x8A, 0xEE, 0x3A, 
	0x77, 0xE5, 0xF6, 0x2D, 0xF9, 0x36, 0x37, 0xF4, 0x75, 0xAA, 
	0x14, 0x7E, 0xB3, 0xCE, 0x6D, 0xE6, 0xCA, 0x53, 0x21, 0xF2, 
	0x62, 0xBF, 0x64, 0x51, 0xE6, 0x7A, 0x0F, 0xFD, 0xF7, 0x2D, 
	0x0B, 0x42, 0x4F, 0xA1, 0x68, 0x08, 0x26, 0x28, 0xF4, 0x5D, 
	0x4A, 0x17, 0x85, 0xAD, 0xFC, 0x12, 0xDE, 0xCE, 0x93, 0x34, 
	0xF7, 0x62, 0x08, 0x8E, 0xCF, 0x2A, 0xBF, 0xA3, 0xE2, 0x27, 
	0x69, 0x2D, 0x93, 0x7F, 0x9A, 0x86, 0xF9, 0x10, 0x7D, 0x96, 
	0xE5, 0xFE, 0x1F, 0xC1, 0x17, 0xA4, 0x9F, 0x5E, 0x41, 0x00, 
	0x00, 
};

	// Default Controller Configuration (len=244)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0xE2, 0x06, 0x05, 0x61, 0x01, 0x00, 0x01, 0x00, 0x06, 
	0x05, 0x61, 0x01, 0x00, 0x02, 0x00, 0x06, 0x05, 0x61, 0x01, 
	0x00, 0x03, 0x00, 0x06, 0x05, 0x61, 0x01, 0x00, 0x04, 0x00, 
	0x06, 0x05, 0x61, 0x01, 0x00, 0x05, 0x00, 0x06, 0x05, 0x61, 
	0x01, 0x00, 0x06, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x01, 
	0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x02, 0x00, 0x06, 0x05, 
	0x61, 0x00, 0x00, 0x03, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 
	0x04, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x05, 0x00, 0x06, 
	0x05, 0x61, 0x00, 0x00, 0x06, 0x00, 0x04, 0x03, 0x21, 0x0E, 
	0x00, 0x04, 0x03, 0x21, 0x0F, 0x00, 0x06, 0x05, 0x61, 0x04, 
	0x00, 0x00, 0x00, 0x06, 0x05, 0x61, 0x01, 0x00, 0x18, 0x00, 
	0x04, 0x03, 0x21, 0x12, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 
	0x01, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x02, 0x00, 0x06, 
	0x05, 0x61, 0x00, 0x00, 0x03, 0x00, 0x06, 0x05, 0x61, 0x00, 
	0x00, 0x04, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x05, 0x00, 
	0x06, 0x05, 0x61, 0x00, 0x00, 0x06, 0x00, 0x06, 0x05, 0x61, 
	0x00, 0x00, 0x07, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x08, 
	0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x01, 0x01, 0x06, 0x05, 
	0x61, 0x00, 0x00, 0x02, 0x01, 0x06, 0x05, 0x61, 0x00, 0x00, 
	0x03, 0x01, 0x06, 0x05, 0x61, 0x00, 0x00, 0x04, 0x01, 0x06, 
	0x05, 0x61, 0x00, 0x00, 0x05, 0x01, 0x06, 0x05, 0x61, 0x00, 
	0x00, 0x06, 0x01, 0x06, 0x05, 0x61, 0x00, 0x00, 0x07, 0x01, 
	0x06, 0x05, 0x61, 0x00, 0x00, 0x08, 0x01, 0xFF, 0xC0, 0xA8, 
	0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x01, 0xC0, 0xA8, 
	0x0A, 0xF0, 0x00, 0x00, 
};

#endif


#define SK_HWEN_SLIDER 1
#define SK_HWEN_GPIO 1
SkaarhojBI16 buttons;