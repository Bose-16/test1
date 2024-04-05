// App.js
import React from 'react';
import ReactDOM from 'react-dom';
import MenuBar from './MenuBar';
function App() {
  return (
    <div>
      <MenuBar />
      {/* Other components or content */}
    </div>
  );
}

ReactDOM.render(<App />, document.getElementById('root'));
