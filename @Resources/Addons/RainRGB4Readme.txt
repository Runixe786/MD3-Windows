RainRGB4.exe is Copyright 2010, 2011 by Jeffrey Morley
Released under Creative Commons Attribution-Non-Commercial-Share Alike 3.0
Version 4 - Sep 12, 2011

RainRGB when called with the appropriate command line parameters will open a standard Windows color picker dialog.

It will then change the desired color variable in the [Variables] section of any .inc / ini file and refresh either a single config or all when completed.  This can be used in combination with @Include files to have a way to set the colors for an entire suite of skins, or with an individual .ini file to set the colors for a single skin.

RainRGB4.exe may reside in any folder.

Usage:
RainRGB4.exe VarName=xxx FileName=xxx Alpha=xxx RefreshConfig=xxx

Example as called from Rainmeter:

SomeAction=["#ADDONSPATH#RainRGB\RainRGB.exe" "VarName=MyTextColor" "FileName=#CURRENTPATH#UserVariables.inc" "Alpha=200" "RefreshConfig=RainRGB"]

You MUST put quotes around the call to the executable and each parameter.

- VarName : REQUIRED
Name of the variable you wish to set in the .inc / ini file.  It must not contain spaces or use the # character.

The variable must be defined in the .inc / .ini file under [Variables]

- FileName : REQUIRED
Full path and name of the .inc or .ini file you wish to change.  RainRGB will read the file, and look for 
an entry for VarName in the [Variables] section.

- Alpha : OPTIONAL
Must be a decimal number from 0-255. Do not use hex numbers for this.  If the entry in the .inc / ini file is in hex, RainRGB will detect this and convert as needed.  This entire parameter may be left off if desired. If the entry in the .inc / ini has an alpha value on the setting, it will be preserved if you do not specify Alpha on this command line.

- RefreshConfig : OPTIONAL
This is the name(s) of the Rainmeter config (ex: Enigma\Sidebar) you wish to refresh after the variable has been set.

If this entire parameter is left off, all currently loaded configs will be refreshed.  You may specify multiple configs to refresh by using " | " as a separator.  Example: "RefreshConfig=JSMorley\JSClock | JSMorley\JSWeather".  The spaces before and after the "pipe" character are required.

Notes:

The variable must already exist in the .inc / ini file under [Variables] and be set to some value.  This addon is to change variables, not create them.

If the setting in the .inc / .ini file is in hex currently (ex: MyColor=FFFFFF or MyColor=FFFFFFFF) RainRGB will preserve this format.  If the current setting in the .inc / ini is in RGB (ex: MyColor=255,255,255 or MyColor=255,255,255,255) RainRGB will preserve that format.

To leave a parameter off, remove the entire "ParmName=ParmValue" entry. Do not set the parameter to "" (NULL) to achieve this.

For example to call the addon without changing the alpha value, and refreshing all skins instead of a specific one:

SomeAction=["#ADDONSPATH#RainRGB\RainRGB.exe" "VarName=MyTextColor" "FileName=#CURRENTPATH#UserVariables.inc"]

Remember that VarName and FileName are REQUIRED.  RainRGB will just silently exit without making any changes if they are missing.
