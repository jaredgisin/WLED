#ifndef WLED_VERSION_H
#define WLED_VERSION_H

// WLED_VERSION is set by build scripts based on the value in package.jsonp["version"]
#ifndef WLED_VERSION
  #define WLED_VERSION "dev"
#endif

#define WLED_CODENAME "Hikari"
#define VERSION_CODE 2104220 // version code in format yymmddb (b = daily build)

extern char versionString[];

#endif // WLED_VERSION_H