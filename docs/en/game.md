# Game version management

The current game version is stored in `<exedir>/.puppylaunch/config.json`.
Installed versions are directories under `<exedir>/.minecraft/versions/`.

## Show help

```
puppylaunchcli game help
```

## Switch

```
puppylaunchcli game switch <version>
```

Writes `{"game_version":"<version>"}` to `.puppylaunch/config.json`.

## Show current

```
puppylaunchcli game current
```

Prints the active version, or `(none)` if not set.

## List installed

```
puppylaunchcli game show
```

Prints each subdirectory under `.minecraft/versions/`.
