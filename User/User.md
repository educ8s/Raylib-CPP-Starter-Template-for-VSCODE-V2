# User folder "settings.json" file
## Adding a w64devkit terminal (Alt-J) to your VSCode terminal Launch Profiles.
1. Navigate to `%userprofile%\AppData\Roaming\Code\User` folder
2. Open the `settings.json` file there
3. Copy the **"w64DevKit":** json object in the `terminal.json` file here, and paste it into the `terminal.integrated.profiles.windows` object in your `settings.json` file.
4.   `!!!MAKE A BACKUP FIRST!!!` If you are having issues getting it to work, you could just copy the entire contents of `terminal.json` file and paste it over the contents of your `settings.json` file. It is actually a copy of a `settings.json` file.
5. Don't forget to save the file afterward.

That's pretty much it if you installed Raylib in the default location.  If not, just update the json value associated with the  `"Path":` name you pasted to point to your `w64devkit\bin` folder.

Some final notes:

- After starting VSCode, press ***Alt-J*** to bring up your default terminal.
- You should see tabs at the top of the terminal with **OUTPUT**, **DEBUG CONSOLE**, and **TERMINAL** among others.  Make sure you're on the **TERMINAL** tab.
- To the right of that, you should see your current terminal listed and a dropdown arrow for *Launch Profile*.  Click *Launch Profile* and you should see the ***w64devkit*** terminal listed.  Click it to launch it.

