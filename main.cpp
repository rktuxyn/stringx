/**
* Copyright (c) 2018, SOW (https://www.facebook.com/safeonlineworld). (https://github.com/RKTUXYN) All rights reserved.
* @author {SOW}
* Copyrights licensed under the New BSD License.
* See the accompanying LICENSE file for terms.
*/
#include "stringx"
int
 main() {
	stringx str("run from here");
	std::cout << sizeof(str) << "\r\n";
	str += "run from here";
	str += str;
	str += str;
	str += str;
	str += str;
	std::cout << sizeof(str) << "\r\n";
	str.dispose();
	std::cout << (str <= "") << "\r\n";
	std::cout << (str < "") << "\r\n";
	std::cout << (str != "") << "\r\n";
	str = NULL;
	std::cout << sizeof(str) << "\r\n";
	return 0;
};
