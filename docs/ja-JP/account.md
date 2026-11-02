# アカウント管理

PuppyLauncherCli はローカルオフラインアカウントを `<exedir>/.puppylaunch/data/users.json` に保存します。

## ローカルアカウントを追加

```
puppylaunchcli account local add <ユーザー名>
```

- `name`: 指定したユーザー名
- `type`: `"local"`（オフライン）
- `uuid`: ランダムな v4 形式 UUID（8-4-4-4-12）

## ローカルアカウントを削除

```
puppylaunchcli account local del <ユーザー名>
```

見つからない場合は「アカウントが見つかりません」と表示されます。

## ローカルアカウント一覧

```
puppylaunchcli account local show
```

ローカルアカウントを1行ずつ表示します。

## 保存場所

`<exedir>/.puppylaunch/data/users.json`
