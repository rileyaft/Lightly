# Maintainer: Nico <d3sox at protonmail dot com>
# Contributor: Sefa Eyeoglu <contact@scrumplex.net>

_pkgname="lightly"
pkgname="$_pkgname-test"
pkgver=0.4.2~custom
pkgrel=1
pkgdesc="Modern style for Qt applications"
url="file:///home/rileyaft/Downloads/Lightly"
arch=('x86_64' 'aarch64')
license=("GPL2")

depends=(
  'breeze-icons'
  'frameworkintegration'
  'hicolor-icon-theme'
  'kcmutils'
  'kdecoration'
  'kwayland5'
)
makedepends=(
  'cmake'
  'extra-cmake-modules'
  'git'
  'kdecoration'
  'qt6-declarative'
  'qt6-base'
)

provides=("$_pkgname")
conflicts=("$_pkgname")

_pkgsrc="$_pkgname"
source=("$_pkgname"::"git+$url.git")
sha256sums=('SKIP')

pkgver() {
  cd "$_pkgsrc"
  git describe --long --tags --exclude='*[a-zA-Z][a-zA-Z]*' \
    | sed -E 's/^v//;s/([^-]*-g)/r\1/;s/-/./g'
}

build() {
  local _cmake_options=(
    -B build
    -S "$_pkgsrc"
    -DCMAKE_INSTALL_PREFIX='/usr'
    -DCMAKE_INSTALL_LIBDIR='lib'
    -DBUILD_TESTING=OFF
  )

  cmake "${_cmake_options[@]}"
  cmake --build build
}

package() {
  DESTDIR="${pkgdir:?}" cmake --install build
}
