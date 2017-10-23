# touchCoin
touchCoin is a cryptocurrency developed with the average user in mind. 

## Synopsis & Inspiration
Proud to be made at the tHacks hackathon (hosted by the Toronto Hackers Organization), in under 48 hours, the solution aimed to resolve the troubles associated with conventional cryptographic currencies. This repository represents the work which a three person team (Ryan, Richard, Anish) completed in the time allotted. It includes the compiled wallet repositories, the source blockchain repository, the mobile application, and the website consolidated into one large repository. 

We analyzed the major problems with today's cryptocurrencies and devised that our cryptocurrency would follow the following main principles: 

1. We would have a blocktime average of under 5 seconds. By using an eglitarian proof of work concept, and an emission factor of 25:10 second block we ensured saftey while also proposing a significantly lower block propogation time when compared to the major industry leaders (BTC at near 10 minutes, LTC at 3 minutes, and ETH/ERC-20 tokens at 12-18 seconds depending on network load). 
2. We would ensure the privacy of our users. By forking the cryptonote-starter repository we were able to think of Privacy right out of the box. 
3. We would utilise advanced technologies (like NFC) to develop applications which promoted ease of use for the average user. 

## Compilation

Dependencies: 
* GCC 4.7.3 or later
* CMake 2.8.6 or later
* Boost 1.55 or later

Source Blockchain Compilation: 
To run the source blockchain purchase two Debian-based nodes with above 2GB RAM each. Then compile our source repositories in the root directoy, and start the daemon by navigating to ```/touchcoin~yourrepositoryname/build/release/src```and running ```./touchCoind```. 

GUIClient Compilation:
Head over to the GUI folder and run make. The resulting files will be in the build folder. If you would rather run a precompiled version of the client, simply download our Compiled GUI files. 

Application: 
To run our mobile application simply run the source files with the Android SDK. 

Website:
To run our website, download the source files and open the ```index.html``` file with your favourite web browser. Do note, this may not work with older versions of the Opera or Internet Explorer browsers. 
