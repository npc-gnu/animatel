# animatel
## animate-line function for *C++*

## History
When i was developing [pacostrap](https://gitlab.com/pigames3/pacostrap), i wanted to add some thing for UI. Colors was **great but not enough** so i writed my own function to animate lines.

## Usage
### Animate your string line
```cpp
#include <iostream>
#include "sanimatel.hpp"
int main(){
	sanimatel("HELELELEY LOADING", 100);  // Writes every letter of HELELELEY LOADING with one-by-one after 100 miliseconds 
	std::cout << std::endl;
	return 0;
}
```
### Compiling/using
```bash
chmod +x scompile && ./scompile
```
### Animate just one letter
```cpp
#include <iostream>
#include "animatel.hpp"
int main(){
	for(int c, c < 10, c++){
	animatel('.', 500); // Put . every 500 miliseconds.
	}
		cout << "Completed." << endl;
}
```
### Compiling/using
chmod +x compile && ./compile
## LICENSE 
Softwares Custom Pi License Version 1(SC-Pi-Lv1)
You can use and re-license this function with following licenses:
   - GNU General Public License v2 (GPLv2)
   - GNU General Public License v3 (GPLv3)
   - GNU Affero General Public License v3 (AGPLv3)
   - CeCILL v2.1
   - European Union Public License v1.2 (EUPL v1.2)
   - Server Side Public License (SSPL)
   - Open Software License (OSL)
   - Real-time Public License (RTPL)
   - Mozilla Public License (MPL)
   - GNU Lesser General Public License (LGPLv2/3)
Please look at the LICENSE.md for mor information.
