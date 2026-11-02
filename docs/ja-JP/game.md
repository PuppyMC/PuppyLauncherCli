# ゲームバージョン管理

現在のゲームバージョンは `<exedir>/.puppylaunch/config.json` に保存されます。
インストール済みバージョンは `<exedir>/.minecraft/versions/` 以下のディレクトリです。

## ヘルプ

```
puppylaunchcli game help
```

## 切り替え

```
puppylaunchcli game switch <バージョン>
```

`{"game_version":"<バージョン>"}` を `.puppylaunch/config.json` に書き込みます。

## 現在のバージョンを表示

```
puppylaunchcli game current
```

現在のバージョンを表示します。未設定の場合は `(none)` と表示されます。

## インストール済みを一覧

```
puppylaunchcli game show
```

`.minecraft/versions/` 以下のディレクトリを一覧表示します。
