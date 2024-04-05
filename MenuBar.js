// React components
// MenuBar.js
import React from 'react';

function MenuBar() {
  const toggleMenu = () => {
    const menuButton = document.querySelector('.container1');
    menuButton.classList.toggle('change');
  };

  return (
    <div className="wrap1">
      <nav>
        <div className="container1" onClick={toggleMenu}>
          <div className="bar1"></div>
          <div className="bar2"></div>
          <div className="bar3"></div>
        </div>
        <ul className="menu">
          <li><a href="#">Home</a></li>
          {/* <li><a href="#">Entry</a></li> */}
          <li><a href="#">Help support</a></li>
          <li><a href="#">About</a></li>
        </ul>
        <div className="hov">
          <button type="button" onClick={() => window.location.href='choicelogin.html'}>
            <span></span>Login
          </button>
        </div>
      </nav>
    </div>
  );
}

export default MenuBar;
