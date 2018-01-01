# reasonml

Exercism exercises in ReasonML.

This track focuses on the use of ReasonML as a web application language within the JavaScript ecosystem, covering [BuckleScript](https://bucklescript.github.io/) and [JavaScript Interop](https://bucklescript.github.io/docs/en/interop-overview.html). The tests are written using [`bs-jest`](https://github.com/glennsl/bs-jest), the BuckleScript binding for [Jest](http://facebook.github.io/jest/).

## Prerequisites

The ReasonML track assumes installation of Reason v3.x and BuckleScript. All of this can be installed through npm or yarn with the following:

[BuckleScript](https://bucklescript.github.io/docs/en/installation.html)

Yarn or npm

```shell
yarn global add bs-platform
```

```shell
npm install -g bs-platform
```

[Reason CLI tools](https://reasonml.github.io/guide/editor-tools/global-installation#recommended-through-npmyarn)

| Platform | Install Command                                                                          |
| :------- | :--------------------------------------------------------------------------------------- |
| OSX      | `npm install -g https://github.com/reasonml/reason-cli/archive/3.0.4-bin-darwin.tar.gz`  |
|          | `yarn global add https://github.com/reasonml/reason-cli/archive/3.0.4-bin-darwin.tar.gz` |
| Linux    | `npm install -g https://github.com/reasonml/reason-cli/archive/3.0.4-bin-linux.tar.gz`   |
|          | `yarn global add https://github.com/reasonml/reason-cli/archive/3.0.4-bin-linux.tar.gz`  |
| Windows  | Please see https://github.com/reasonml/reasonml.github.io/issues/195                     |

If you already have, and wish to use, OPAM, then [alternative installation instructions are here](https://reasonml.github.io/guide/editor-tools/global-installation#alternative-through-opam).

[Editor Plugins](https://reasonml.github.io/guide/editor-tools/editors-plugins)

It's recommended to use VSCode with ReasonML for the time being, as the Atom.io plugin still needs some work.

| Editor | Plugin                                                                    |
| :----- | :------------------------------------------------------------------------ |
| VSCode | https://marketplace.visualstudio.com/items?itemName=freebroccolo.reasonml |

## Running Tests

To run all tests, type `yarn test` or `npm test` from the top level directory.

To run tests for a particular exercise, `yarn test-assignment ASS=luhn` or navigate to the exercise folder and run `yarn test`.

## Contribution

This is a work in progress used to better learn ReasonML itself. If you have comments or corrections, please start a dialogue through GitHub issues before PRs, thanks!
