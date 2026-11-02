# Account management

PuppyLauncherCli stores local offline accounts under `<exedir>/.puppylaunch/data/users.json`.

## Add a local account

```
puppylaunchcli account local add <username>
```

Creates an entry with:
- `name`: the username you passed
- `type`: `"local"` (offline)
- `uuid`: a random v4-style UUID (8-4-4-4-12 hex groups)

## Remove a local account

```
puppylaunchcli account local del <username>
```

Removes the matching entry. Prints "Account not found" when no match.

## List local accounts

```
puppylaunchcli account local show
```

Prints each local account name on its own line.

## Storage layout

```json
{
  "users": [
    {"name":"alice","type":"local","uuid":"12345678-1234-..."}
  ]
}
```

Path: `<exedir>/.puppylaunch/data/users.json`.
